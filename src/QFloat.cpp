#include"QFloat.h"
// inicialize
QFloat::QFloat()
{
	high = 0;
	low = 0;
}
QFloat::QFloat(string s)
{
	stored(s);
}
QFloat::QFloat(const QFloat & Q)
{
	this->high = Q.high;
	this->low = Q.low;
}
QFloat::QFloat(bool * a)
{
	high = bitArrayToDec(a, 0, bit / 2 - 1);
	low = bitArrayToDec(a, bit / 2, bit - 1);
}
void QFloat::input() {
	string s;
	cout << "Enter N: ";
	cin >> s;
	stored(s);
}
void QFloat::stored(string s)
{
	bool*str = str2Bin(s);
	high = bitArrayToDec(str, 0, 63);   // convert bit/4 element from bool array to unsigned decimal
	low  = bitArrayToDec(str, 64, 127);
	delete[]str;
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
bool* str2Bin(string s) {
	// create bool to contain
	bool*a = new bool[bit];

	int16_t exponent = -1;
	int startPos = 0;

	if (s[0] == '-')
	{
		a[0] = 1; startPos = 1;
	}
	else a[0] = 0;

	int pointPos = 0;

	for (int i = 0; i < s.size(); i++)
		if(s[i]=='.'){
			pointPos = i; break;
		}
	// vd -123.567
	// string int to bin
	string intStr;
	intStr = s.substr(startPos, pointPos - startPos);
	string boolInt;
	string sample(intStr.length(), '0');
	while (intStr != sample) {
		boolInt.push_back((intStr[intStr.length()] - '0') % 2);
		intStr = strDiv2(intStr);
	}
	boolInt.reserve();
	

	// string frac to bin
	string fracStr;
	fracStr = s.substr(pointPos + 1, s.length() - pointPos - 1);
	string boolFrac;
	string sample2(fracStr.length(), '0');
	while (fracStr!=sample2) {
		boolFrac.push_back(strMul2(fracStr));
	}

	pointPos = boolInt.length();
	// find exponent
	int index = 0;
	while (exponent == -1 && index < boolInt.length()) {
		if (boolInt[index] == 1) {
			exponent = pointPos-index-1;//2-
		}
		index++;
	}
	index = 0;
	while (exponent == -1 && index < boolFrac.length()) {
		if (boolFrac[index] == 1) {
			exponent = pointPos - index - 2;//2-
		}
		index++;
	}
	uint16_t Exponent = exponent + 127;

	bool *boolExpo = dec2BinExpo(Exponent);
	bool *IntFrac = mergeIntFrac(boolInt, boolFrac);

	merge(a, boolExpo, 1, 15);
	merge(a, IntFrac, 16, 112);
	delete[]boolExpo;
	delete[]IntFrac;

	return a;
}
string strDiv2(string s) {
	string substr; bool mem = 0;
	for (int i = 0; i < s.size(); i++) {
		substr.push_back(((mem * 10 + (s[i] - '0')) / 2) + '0');
		mem = (mem * 10 + (s[i] - '0')) % 2;
	}
	return substr;
}
bool strMul2(string s) {
	string substr; bool mem = 0; int temp = 0;
	for (int i = s.length() - 1; i >= 0; i--) {
		temp = (s[i] - '0' + s[i] - '0' + mem);
		s[i] = temp % 10;
		mem = temp / 10;
	}
	return mem;
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
void merge(bool *des, bool * a, int start, int size) {
	for (int i = 0; i < size; i++) {
		des[start++] = a[i];
	}
}
bool* mergeIntFrac(string Int, string Frac) {
	bool *res = new bool[112];
	int size = 0;
	for (int i = 0; i < Int.length() && size < 112; i++)
		res[size++] = Int[i];
	for (int i = 0; i < Frac.length() && size < 112; i++)
		res[size++] = Frac[i];
	// 001111
	int pos = 0;
	while (res[pos]!=1) {
		pos++;
	}
	// 11
	for (int i = 0; i < size - pos; i++)
		res[i] = res[i + pos];
	while(size<112)
		res[size++] = 0;
	
	return res;
}
void outBoolStr(bool * a) {
	for (int i = 0; i < bit / 2; i++) {
		//if (i % 4 == 0 && i > 0)
			//cout << " ";
		cout << a[i];
	}
}