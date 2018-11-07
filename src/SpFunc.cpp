#include "QINT.h"
#include "SpFunc.h"

string strDiv2(string s) {
	string substr; bool mem = 0;
	for (int i = 0; i < s.size(); i++) {
		substr.push_back(((mem * 10 + (s[i] - '0')) / 2) + '0');
		mem = (mem * 10 + (s[i] - '0')) % 2;
	}
	return substr;
}
string strMul2(string s, bool &mem) {
	string substr; int temp = 0;
	for (int i = s.length() - 1; i >= 0; i--) {
		temp = (s[i] - '0' + s[i] - '0' + mem);
		s[i] = (temp % 10) + '0';
		mem = temp / 10;
	}
	return s;
}

bool* decToBin(uint64_t n) {
	bool* a = new bool[bit / 2];
	int index = 0;
	for (int i = bit / 2 - 1; i >= 0; i--) {
		a[i] = (n>>index) & 1;
		index++;
	}
	return a;
}
bool* dec2BinExpo(uint16_t n) {
	bool* a = new bool[15];
	int index = 0;
	for (int i = 14; i >= 0; i--) {
		a[i] = (n >> index) & 1;
		index++;
	}
	return a;
}

bool* connect2Bin(bool*first, bool*last, int n) {
	bool *c = new bool[n]; int j = 0;
	for (int i = 0; i < n / 2; i++) {
		c[j] = first[i];
		c[n / 2 + j] = last[i];
		j++;
	}	
	return c;
}

string bool2Str(bool * a)
{
	string s;
	int index = 0;
	while (index < 128) {
		if (a[index]) break;
		index++;
	}
	for (int i = index; i < bit; i++)
		s.push_back(a[i] + '0');
	delete[]a;
	return s;
}

bool* convertToOffset2(bool* a) {
	int pivot = bit - 1;
	// find '1' first from right
	for (int i = 1; (pivot >= 0) && i; pivot--)
		if (a[pivot]) break;
	// get offset 1 left side pivot
	for (int i = pivot - 1; i >= 0; i--)
		a[i] = !a[i];
	return a;
}

string bin2Hex(bool * a){
	if (checkEqualZero(a))
		return "0";
	char temp;
	string res;
	for (int i = 0; i < bit / 4; i++){
		temp = 0;
		for (int j = 0; j < 4; j++)
			temp = (temp << 1) | a[4*i+j];
		if(temp < 10)
			res.push_back(temp + '0');
		else res.push_back(temp + 55);
	}
	int index = 0;
	while (res[index] == '0') {
		index++;
	}

	delete[]a;
	if (index != 0) {
		string sub = res.substr(index, res.length() - index);
		return sub;
	}
	return res;
}

bool * hex2Bin(string s)
{
	bool *res = new bool[bit];
	memset(res, 0, bit);
	bool temp = 0;
	int index = 127;
	for (int i = s.length()-1; i >= 0; i--) {
		if (s[i] <= '9')
			for (int j = 0; j < 4 ; j++)
				res[index--] = ((s[i] - '0') >> j) & 1;
		else 
			for (int j = 0; j < 4 ; j++)
				res[index--] = ((s[i] - 55) >> j) & 1;
	}
	return res;
}

uint64_t bitArrayToDec(bool arr[], int start, int end)
{
	uint64_t ret = 0;
	uint64_t tmp;
	for (int i = start; i <= end; i++) {
		tmp = arr[i];
		ret |= tmp << (end - i);
	}
	return ret;
}

void shiftRight1Bit(bool*a, bool head) {
	for (int i = bit - 1; i >= 1; i--)
		a[i] = a[i - 1];
	a[0] = head;
}
void shiftLeft1Bit(bool*a, bool tail) {
	for (int i = 0; i < bit - 1; i++)
		a[i] = a[i + 1];
	a[bit - 1] = tail;
}

bool checkEqualZero(bool *a) {
	for (int i = 0; i < bit; i++)
		if (a[i]) return false;
	return true;
}

string addByString(string a, string b)
{
	int al = a.size() - 1;
	int bl = b.size() - 1;

	int carry = 0;
	string result = "";

	while (al >= 0 && bl >= 0)
	{
		int temp = (int)(a[al] - '0') + (int)(b[bl] - '0') + carry;
		carry = 0;
		if (temp > 9)
		{
			carry = 1;
			temp = temp - 10;
		}

		result += char(temp + '0');
		al--;
		bl--;
	}

	while (al >= 0)
	{
		int temp = (int)(a[al] - '0') + carry;
		carry = 0;
		if (temp > 9)
		{
			carry = 1;
			temp = temp % 10;
		}

		result += char(temp + '0');
		al--;
	}

	while (bl >= 0)
	{
		int temp = (int)(b[bl] - '0') + carry;
		carry = 0;
		if (temp > 9)
		{
			carry = 1;
			temp = temp % 10;
		}

		result += char(temp + '0');
		bl--;
	}

	if (carry)
		result += "1";

	string addition = "";

	for (int i = result.size() - 1; i >= 0; i--)
		addition += result[i];   // reversing the answer

	return addition;
}

string convertDoubToInt(string str)
{
	for (int i = 0; i < str.length(); ++i)
		if (str[i] == '.')
			str.erase(i, str.length() - i);
	return str;
}


string trim(string a)   // for removing leading 0s
{
	string res = "";
	int i = 0;

	while (a[i] == '0')
		i++;

	for (; i < a.size(); i++)
		res += a[i];

	return res;
}

bool* strInt2Bin(string s) {
	// Inicialize bool array with value 0
	bool *a = new bool[bit];
	for (int i = 0; i < bit; i++)
		a[i] = 0;

	int k = bit - 1;

	string substr;
	// case: negative number
	if (s[0] == '-') {
		substr = s.substr(1, s.size() - 1);
	}
	else substr = s;
	// devide and pushback to bool array
	while (k >= 0) {
		int x = ((substr[substr.length() - 1] - '0') % 2);
		a[k] = x;
		k--;
		substr = strDiv2(substr);
	}
	// case: negative number -> get offset 2
	if (s[0] == '-') {
		a = convertToOffset2(a);
	}
	return a;
}
bool* strFloat2Bin(string s) {
	// create bool to contain
	bool*a = new bool[bit];

	int16_t exponent = -1;
	int startPos = 0;
	// set bit sign
	if (s[0] == '-')
	{
		a[0] = 1; startPos = 1;
	}
	else a[0] = 0;
	// find pointPos in string
	int pointPos = 0;

	for (int i = 0; i < s.size(); i++)
		if (s[i] == '.') {
			pointPos = i; break;
		}

	// string int to bin
	string intStr;
	// cut string before point
	intStr = s.substr(startPos, pointPos - startPos);
	string boolInt;// array store int part
	string sample(intStr.length(), '0');// sample to check stop loop
	while (intStr != sample) {
		boolInt.push_back((intStr[intStr.length() - 1] - '0') % 2);
		intStr = strDiv2(intStr);
	}
	boolInt.reserve();


	// string frac to bin
	string fracStr;
	// cut string after point
	fracStr = s.substr(pointPos + 1, s.length() - pointPos - 1);
	string boolFrac;// array store frac part
	string sample2(fracStr.length(), '0');// sample to check stop loop
	bool mem = 0;
	while (fracStr != sample2) {
		fracStr = strMul2(fracStr, mem);
		boolFrac.push_back(mem);
		mem = 0;
	}
	// position of point in bin array
	pointPos = boolInt.length();

	// find exponent
	int index = 0;
	// case 1 at int 
	while (exponent == -1 && index < boolInt.length()) {
		if (boolInt[index] == 1) {
			exponent = pointPos - index - 1;
		}
		index++;
	}
	// case 1 at frac 
	index = 0;
	while (exponent == -1 && index < boolFrac.length()) {
		if (boolFrac[index] == 1) {
			exponent = pointPos - index - 2;
		}
		index++;
	}
	uint16_t Exponent = exponent + 127;

	// create bool Exponent and Frac part
	bool *boolExpo = dec2BinExpo(Exponent);
	bool *IntFrac = mergeIntFrac(boolInt, boolFrac);
	// merge to complete array
	merge(a, boolExpo, 1, 15);
	merge(a, IntFrac, 16, 112);
	delete[]boolExpo;
	delete[]IntFrac;

	return a;
}

void merge(bool *des, bool * a, int start, int size) {
	for (int i = 0; i < size; i++) {
		des[start++] = a[i];
	}
}
bool* mergeIntFrac(string Int, string Frac) {
	bool *res = new bool[112];

	int size = 0;
	// push Int array to head
	for (int i = 0; i < Int.length() && size < 112; i++)
		res[size++] = Int[i];
	// push Frac array to next position
	for (int i = 0; i < Frac.length() && size < 112; i++)
		res[size++] = Frac[i];

	// find first 1
	int pos = 0;
	while (res[pos] != 1) {
		pos++;
	}
	// move left from pos+1
	for (int i = 0; i < size - pos - 1; i++)
		res[i] = res[i + pos + 1];
	for (int i = size - pos - 1; i < size; i++)
		res[i] = 0;
	// fill empty with 0
	while (size < 112)
		res[size++] = 0;

	return res;
}
bool * str2Bool(string s) {
	bool *a = new bool[128];
	memset(a, 0, 128);
	int index = 127;
	for (int i = s.length() - 1; i >= 0 ; i--)
		a[index--] = s[i]-'0';
	return a;
}
void AutoTest(char*input, char*output) {
	vector<string> a;
	int index = 0;
	string token;
	ifstream file(input);
	ofstream out(output);
	while (getline(file, token)) {
		istringstream line(token);
		while (line >> token) {
			a.push_back(token);
			index++;
		}
		if (file.unget().get() == '\n' || file.eof()) {
			if (index == 3) {
				if (a[1] == "~") {
					if (a[0] == "2") {
						bool *temp = str2Bool(a[2]);
						QINT res(temp);
						res = ~res;
						delete[]temp;
						out<<bool2Str(res.data2Bin())<<endl;
						cout << "~ [BIN]\n";
					}
					else if (a[0] == "10") {
						QINT res(a[2]);
						res= ~res;
						out<<res.toDec()<<endl;
						cout << "~ [DEC]\n";
					}
					else if (a[0] == "16") {
						bool* temp=hex2Bin(a[2]);
						QINT res(temp);
						res = ~res;
						delete[]temp;
						out<<bin2Hex(res.data2Bin())<<endl;
						cout << "~ [HEX]\n";
					}
				}
				else if (a[0] == "2") {
					if (a[1] == "16") {
						bool *temp = str2Bool(a[2]);
						QINT res(temp);
						delete[]temp;
						out<<bin2Hex(res.data2Bin())<<endl;
						cout << "[BIN] to [HEX]\n";
					}
					else if (a[1] == "10") {
						bool *temp = str2Bool(a[2]);
						QINT res(temp);
						delete[]temp;
						out<<res.toDec()<<endl;
						cout << "[BIN] to [DEC]\n";
					}
				}
				else if (a[0] == "10") {
					if (a[1] == "16") {
						QINT res(a[2]);
						out<<bin2Hex(res.data2Bin())<<endl;
						cout << "[DEC] to [HEX]\n";
					}
					else if (a[1] == "2") {
						QINT res(a[2]);
						out<<bool2Str(res.data2Bin())<<endl;
						cout << "[DEC] to [BIN]\n";
					}
				}
				else if (a[0] == "16") {
					if (a[1] == "10") {
						bool* temp=hex2Bin(a[2]);
						QINT res(temp);
						delete[]temp;
						out<<res.toDec()<<endl;
						cout << "[HEX] to [DEC]\n";
					}
					else if (a[1] == "2") {
						bool* temp=hex2Bin(a[2]);
						out<<bool2Str(temp)<<endl;
						cout << "[HEX] to [BIN]\n";
					}
				}
			}
			if (index == 4) {
				if (a[2] == "+") {
					if (a[0] == "2") {
						bool *q1 = str2Bool(a[1]);
						bool *q2 = str2Bool(a[3]);
						QINT Q1(q1);
						QINT Q2(q2);
						QINT res;
						res = Q1 + Q2;
						out<<bool2Str(res.data2Bin())<<endl;
						delete[]q1;
						delete[]q2;
						cout << "[BIN] + [BIN]\n";
					}
					else if (a[0] == "10") {
						QINT Q1(a[1]);
						QINT Q2(a[3]);
						QINT res;
						res = Q1 + Q2;
						out<<res.toDec()<<endl;
						cout << "[DEC] + [DEC]\n";
					}
					else if (a[0] == "16") {
						bool* q1=hex2Bin(a[1]);
						bool* q2=hex2Bin(a[3]);
						QINT Q1(q1);
						QINT Q2(q2);
						QINT res;
						res = Q1 + Q2;
						out<<bin2Hex(res.data2Bin())<<endl;
						delete[]q1;
						delete[]q2;
						cout << "[HEX] + [HEX]\n";
					}
				}
				else if (a[2] == "-") {
					if (a[0] == "2") {
						bool *q1 = str2Bool(a[1]);
						bool *q2 = str2Bool(a[3]);
						QINT Q1(q1);
						QINT Q2(q2);
						QINT res;
						res = Q1 - Q2;
						out<<bool2Str(res.data2Bin())<<endl;
						delete[]q1;
						delete[]q2;
						cout << "[BIN] - [BIN]\n";
					}
					else if (a[0] == "10") {
						QINT Q1(a[1]);
						QINT Q2(a[3]);
						QINT res;
						res = Q1 - Q2;
						out<<res.toDec()<<endl;
						cout << "[DEC] - [DEC]\n";
					}
					else if (a[0] == "16") {
						bool* q1=hex2Bin(a[1]);
						bool* q2=hex2Bin(a[3]);
						QINT Q1(q1);
						QINT Q2(q2);
						QINT res;
						res = Q1 - Q2;
						out<<bin2Hex(res.data2Bin())<<endl;
						delete[]q1;
						delete[]q2;
						cout << "[HEX] - [HEX]\n";
					}
				}
				else if (a[2] == "*") {
					if (a[0] == "2") {
						bool *q1 = str2Bool(a[1]);
						bool *q2 = str2Bool(a[3]);
						QINT Q1(q1);
						QINT Q2(q2);
						QINT res;
						res = Q1 * Q2;
						out<<bool2Str(res.data2Bin())<<endl;
						delete[]q1;
						delete[]q2;
						cout << "[BIN] * [BIN]\n";
					}
					else if (a[0] == "10") {
						QINT Q1(a[1]);
						QINT Q2(a[3]);
						QINT res;
						res = Q1 * Q2;
						out<<res.toDec()<<endl;
						cout << "[DEC] * [DEC]\n";
					}
					else if (a[0] == "16") {
						bool* q1=hex2Bin(a[1]);
						bool* q2=hex2Bin(a[3]);
						QINT Q1(q1);
						QINT Q2(q2);
						QINT res;
						res = Q1 * Q2;
						out<<bin2Hex(res.data2Bin())<<endl;
						delete[]q1;
						delete[]q2;
						cout << "[HEX] * [HEX]\n";
					}
				}
				else if (a[2] == "/") {
					if (a[0] == "2") {
						bool *q1 = str2Bool(a[1]);
						bool *q2 = str2Bool(a[3]);
						QINT Q1(q1);
						QINT Q2(q2);
						QINT res;
						res = Q1 / Q2;
						out<<bool2Str(res.data2Bin())<<endl;
						delete[]q1;
						delete[]q2;
						cout << "[BIN] / [BIN]\n";
					}
					else if (a[0] == "10") {
						QINT Q1(a[1]);
						QINT Q2(a[3]);
						QINT res;
						res = Q1 / Q2;
						out<<res.toDec()<<endl;
						cout << "[DEC] / [DEC]\n";
					}
					else if (a[0] == "16") {
						bool* q1=hex2Bin(a[1]);
						bool* q2=hex2Bin(a[3]);
						QINT Q1(q1);
						QINT Q2(q2);
						QINT res;
						res = Q1 / Q2;
						out<<bin2Hex(res.data2Bin())<<endl;
						delete[]q1;
						delete[]q2;
						cout << "[HEX] / [HEX]\n";
					}
				}
				else if (a[2] == ">>") {
					if (a[0] == "2") {
						bool *q1 = str2Bool(a[1]);
						QINT Q1(q1);
						delete[]q1;
						Q1 = Q1 >> stoi(a[3]);
						out<<bool2Str(Q1.data2Bin())<<endl;
						cout << "[BIN] >> n\n";
					}
					else if (a[0] == "10") {
						QINT Q1(a[1]);
						Q1 = Q1 >> stoi(a[3]);
						out<<Q1.toDec()<<endl;
						cout << "[DEC] >> n\n";
					}
					else if (a[0] == "16") {
						bool* q1=hex2Bin(a[1]);
						QINT Q1(q1);
						delete[]q1;
						Q1 = Q1 >> stoi(a[3]);
						out<<bin2Hex(Q1.data2Bin())<<endl;
						cout << "[HEX] >> n\n";
					}
				}
				else if (a[2] == "<<") {
					if (a[0] == "2") {
						bool *q1 = str2Bool(a[1]);
						QINT Q1(q1);
						delete[]q1;
						Q1 = Q1 << stoi(a[3]);
						out<<bool2Str(Q1.data2Bin())<<endl;
						cout << "[BIN] << n\n";
					}
					else if (a[0] == "10") {
						QINT Q1(a[1]);
						Q1 = Q1 << stoi(a[3]);
						out<<Q1.toDec()<<endl;
						cout << "[DEC] << n\n";
					}
					else if (a[0] == "16") {
						bool* q1=hex2Bin(a[1]);
						QINT Q1(q1);
						delete[]q1;
						Q1 = Q1 << stoi(a[3]);
						out<<bin2Hex(Q1.data2Bin())<<endl;
						cout << "[HEX] << n\n";
					}
				}
				else if (a[2] == "&") {
					if (a[0] == "2") {
						bool *q1 = str2Bool(a[1]);
						bool *q2 = str2Bool(a[3]);
						QINT Q1(q1);
						QINT Q2(q2);
						QINT res;
						res = Q1 & Q2;
						out<<bool2Str(res.data2Bin())<<endl;
						delete[]q1;
						delete[]q2;
						cout << "[BIN] & [BIN]\n";
					}
					else if (a[0] == "10") {
						QINT Q1(a[1]);
						QINT Q2(a[3]);
						QINT res;
						res = Q1 & Q2;
						out<<res.toDec()<<endl;
						cout << "[DEC] & [DEC]\n";
					}
					else if (a[0] == "16") {
						bool* q1=hex2Bin(a[1]);
						bool* q2=hex2Bin(a[3]);
						QINT Q1(q1);
						QINT Q2(q2);
						QINT res;
						res = Q1 & Q2;
						out<<bin2Hex(res.data2Bin())<<endl;
						delete[]q1;
						delete[]q2;
						cout << "[HEX] & [HEX]\n";
					}
				}
				else if (a[2] == "|") {
					if (a[0] == "2") {
						bool *q1 = str2Bool(a[1]);
						bool *q2 = str2Bool(a[3]);
						QINT Q1(q1);
						QINT Q2(q2);
						QINT res;
						res = Q1 | Q2;
						out<<bool2Str(res.data2Bin())<<endl;
						delete[]q1;
						delete[]q2;
						cout << "[BIN] | [BIN]\n";
					}
					else if (a[0] == "10") {
						QINT Q1(a[1]);
						QINT Q2(a[3]);
						QINT res;
						res = Q1 | Q2;
						out<<res.toDec()<<endl;
						cout << "[DEC] | [DEC]\n";
					}
					else if (a[0] == "16") {
						bool* q1=hex2Bin(a[1]);
						bool* q2=hex2Bin(a[3]);
						QINT Q1(q1);
						QINT Q2(q2);
						QINT res;
						res = Q1 | Q2;
						out<<bin2Hex(res.data2Bin())<<endl;
						delete[]q1;
						delete[]q2;
						cout << "[HEX] | [HEX]\n";
					}
				}
				else if (a[2] == "^") {
					if (a[0] == "2") {
						bool *q1 = str2Bool(a[1]);
						bool *q2 = str2Bool(a[3]);
						QINT Q1(q1);
						QINT Q2(q2);
						QINT res;
						res = Q1 ^ Q2;
						out<<bool2Str(res.data2Bin())<<endl;
						delete[]q1;
						delete[]q2;
						cout << "[BIN] ^ [BIN]\n";
					}
					else if (a[0] == "10") {
						QINT Q1(a[1]);
						QINT Q2(a[3]);
						QINT res;
						res = Q1 ^ Q2;
						out<<res.toDec()<<endl;
						cout << "[DEC] ^ [DEC]\n";
					}
					else if (a[0] == "16") {
						bool* q1=hex2Bin(a[1]);
						bool* q2=hex2Bin(a[3]);
						QINT Q1(q1);
						QINT Q2(q2);
						QINT res;
						res = Q1 ^ Q2;
						out<<bin2Hex(res.data2Bin())<<endl;
						delete[]q1;
						delete[]q2;
						cout << "[HEX] ^ [HEX]\n";
					}
				}
			}
		}
		index = 0;
		a.erase(a.begin(), a.end());
	}
	file.close();
	out.close();
	cout << "Save Done!\n";
}