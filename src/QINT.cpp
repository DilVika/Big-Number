#include"QINT.h"

void QINT::input(){
	string temp;
	cout << "Enter N: ";
	cin >> temp;
	stored(temp);
}
void QINT::output(){
	cout << data[0] << " ";
	cout << data[1] << endl;
}

void QINT::stored(string s)
{
	bool*str = strToBin(s);
	for (int i = 0; i < 2; i++)
		data[i] = bitArrayToDec(str, i*bit / 2, (i + 1)*bit / 2 - 1);   // convert bit/4 element from bool array to unsigned decimal
	delete[]str;
}


bool * QINT::data2Bin()const
{
	bool* a = decToBin(this->data[0]);
	bool* b = decToBin(this->data[1]);
	bool*c = connect2Bin(a, b, bit);

	delete[]a;
	delete[]b;
	return c;
}

bool * QINT::data2BinOffSet2()const
{
	bool *a = this->data2Bin();
	int i = bit-1;
	for (; i >= 0; i--)
		if (a[i])break;
	i = i - 1;
	for (; i >= 0; i--)
		a[i] = !a[i];
	return a;
}

// *********   Constructor  ***********

QINT::QINT() {
	data[0] = 0;
	data[1] = 0;
}
QINT::QINT(int64_t N) {
	data[0] = 0;
	data[1] = N;
}
QINT::QINT(string s) {
	stored(s);
}
QINT::QINT(const QINT &Q) {
	this->data[0] = Q.data[0];
	this->data[1] = Q.data[1];
}
QINT::QINT(bool *a) {
	data[0] = bitArrayToDec(a, 0, bit / 2 - 1);
	data[1] = bitArrayToDec(a, bit / 2, bit - 1);
}


//****** Operator  *******

// bit operator 
QINT operator&(const QINT &Q1, const QINT &Q2)
{
	bool* q1 = Q1.data2Bin();
	bool* q2 = Q2.data2Bin();
	bool* res = new bool[bit];
	for (int i = bit - 1; i >= 0; i--) {
		res[i] = q1[i] & q2[i];
	}
	delete[]q1;
	delete[]q2;
	QINT a(res);
	return a;
}
QINT operator|(const QINT &Q1, const QINT &Q2) {
	bool* q1 = Q1.data2Bin();
	bool* q2 = Q2.data2Bin();
	bool* res = new bool[bit];
	for (int i = bit - 1; i >= 0; i--) {
		res[i] = q1[i] | q2[i];
	}
	delete[]q1;
	delete[]q2;
	QINT a(res);
	return a;
}
QINT operator^(const QINT &Q1, const QINT &Q2)
{
	bool* q1 = Q1.data2Bin();
	bool* q2 = Q2.data2Bin();
	bool* res = new bool[bit];
	for (int i = bit - 1; i >= 0; i--) {
		res[i] = q1[i] ^ q2[i];
	}
	delete[]q1;
	delete[]q2;
	QINT a(res);
	return a;
}
QINT operator~(const QINT &Q1)
{
	bool* q1 = Q1.data2Bin();
	bool* res = new bool[bit];
	for (int i = bit - 1; i >= 0; i--) {
		res[i] = !q1[i];
	}
	delete[]q1;
	QINT a(res);
	return a;
}
//
QINT operator+(const QINT & Q1, const QINT & Q2)
{
	bool *q1 = Q1.data2Bin();
	bool *q2 = Q2.data2Bin();

	bool *result = new bool[bit];
	bool mem = 0;
	for (int i = bit - 1; i >= 0; i--)
	{
		result[i] = (q1[i] ^ q2[i]) ^ mem;
		mem =( q1[i] & q2[i]) | ( mem & (q1[i] ^ q2[i]));
	}

	QINT res(result);
	delete[]q1;
	delete[]q2;
	delete[]result;
	return res;
}
QINT operator-(const QINT & Q1, const QINT & Q2)
{
	bool *q1 = Q1.data2Bin();
	bool *q2 = Q2.data2BinOffSet2();

	bool *result = new bool[bit];
	bool mem = 0;
	for (int i = bit - 1; i >= 0; i--) {
		result[i] = (q1[i] ^ q2[i]) ^ mem;
		mem = q1[i] & q2[i] | mem * (q1[i] ^ q2[i]);
	}
	QINT res(result);
	delete[]q1;
	delete[]q2;
	delete[]result;

	return res;
}

QINT operator*(const QINT & M1, const QINT & Q2)
{	// use Booth's multiplication algorithm

	bool* M = M1.data2Bin();
	bool* Q = Q2.data2Bin();

	bool* A = new bool[bit];
	memset(A, 0, bit);
	bool* Temp = NULL;

	bool temp = 0;
	bool mem = 0;
	int k = bit;

	while (k > 0) {
		// check last Q and mem
		if (Q[bit - 1] && !mem)// 1.0
		{
			Temp = A;
			A = (QINT(A) - QINT(M)).data2Bin();
			delete[]Temp;
		}
		else if (!Q[bit - 1] && mem)// 0.1
		{
			Temp = A;
			A = (QINT(A) + QINT(M)).data2Bin();
			delete[]Temp;
		}

		// shift right [A,Q,mem]
		temp = A[bit - 1];
		shiftRight1Bit(A, A[0]);
		mem = Q[bit - 1];
		shiftRight1Bit(Q, temp);

		k = k - 1;
	}
	QINT res(Q);

	delete[]M;
	delete[]Q;
	delete[]A;

	return res;
}
QINT operator/(const QINT & Q1, const QINT & M2)
{
	bool* M = M2.data2Bin();
	if (checkEqualZero(M)) return QINT();
	bool* Q = Q1.data2Bin();
	bool* Temp = NULL;
	bool isSameSign = !(Q[0] ^ M[0]);

	// check Q < 0 and M < 0
	if (M[0]) {
		Temp = M;
		M = M2.data2BinOffSet2();
		delete[]Temp;
	}
	if (Q[0]) {
		Temp = Q;
		Q = Q1.data2BinOffSet2();
		delete[]Temp;
	}
	bool* A = new bool[bit];
	if (Q[0]) {
		memset(A, 1, bit);
	}
	else memset(A, 0, bit);

	int k = bit;
	while (k > 0) {
		//shift left [A,Q]
		shiftLeft1Bit(A, Q[0]);
		shiftLeft1Bit(Q, 0);

		// A = A - M
		Temp = A;
		A = (QINT(A) - QINT(M)).data2Bin();
		delete[]Temp;

		if (A[0]) {
			Q[bit - 1] = 0;
			// A = A + M
			Temp = A;
			A = (QINT(A) + QINT(M)).data2Bin();
			delete[]Temp;
		}
		else Q[bit - 1] = 1;
		k = k - 1;
	}
	if (!isSameSign)
		Q = convertToOffset2(Q);
	QINT res(Q);

	delete[]M;
	delete[]Q;
	delete[]A;

	return res;
}

// shift n bit
QINT operator<<(const QINT &Q, int n)
{
	bool* a = Q.data2Bin();
	for (int i = 0; i < bit - n; i++)
		a[i] = a[i + n];
	for (int i = 0; i < n; i++)
		a[bit - n + i] = 0;

	QINT res(a);
	delete[]a;
	return res;
}
QINT operator>>(const QINT &Q, int n)
{
	bool* a = Q.data2Bin();
	bool sign = a[0];
	for (int i = bit - 1; i >= n; i--)
		a[i] = a[i - n];
	for (int i = 0; i < n; i++)
		a[i] = sign;

	QINT res(a);
	delete[]a;
	return res;
}
QINT shiftRightNoneSign(const QINT & Q, int n)
{
	bool* a = Q.data2Bin();
	for (int i = bit - 1; i >= n; i--)
		a[i] = a[i - n];
	for (int i = 0; i < n; i++)
		a[i] = 0;

	QINT res(a);
	delete[]a;
	return res;
}
// rotate n bit
QINT rol(const QINT &Q, int n) {
	return QINT(Q << n | shiftRightNoneSign(Q, bit - n));
}
QINT ror(const QINT &Q, int n) {
	return QINT(Q << (bit - n) | shiftRightNoneSign(Q, n));
}

// assignment
QINT & QINT::operator=(const QINT & Q) {
	this->data[0] = Q.data[0];
	this->data[1] = Q.data[1];
	return *this;
}

// ******unfinished
QINT & QINT::operator=(const char *)
{
	// TODO: insert return statement here
	return *this;
}

QINT QINT::OffSet2()
{
	bool *temp = this->data2BinOffSet2();
	QINT result(temp);
	delete[] temp;
	return result;
}

string QINT::toDec()
{
	string result;
	bool isNegative = (this->data[0] >>( (bit/2) -1) & 1);

	uint64_t high = this->data[0];
	uint64_t low = this->data[1];
	if (isNegative == 1)
	{
		high = this->OffSet2().data[0];
		low = this->OffSet2().data[1];
	}


	// Calculate at High number
	long double redict = 0.0;
	string temp = to_string(0);
	for (int i = bit/2; i < bit; ++i)
	{
		if ((high & 1))
		{
			redict = pow(2.0, (long double)i);
			temp = addByString(temp, convertDoubToInt(to_string(redict)));
		}
		high = high >> 1;
	}

	result = addByString(temp, to_string(low));
	if (isNegative)  result = "-" + result;

	return result;
}
