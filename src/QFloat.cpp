#include"QFloat.h"
// inicialize
QFloat::QFloat()
{
	high = 0;
	low = 0;
}
void QFloat::input() {
	string s;
	cout << "Enter N: ";
	cin >> s;
}
bool* str2Bin(string s) {
	// create bool to contain
	bool*a = new bool[bit];

	int exponent = -1;
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
	pointPos = boolInt.length();

	// string frac to bin
	string fracStr;



	// find exponent
	int index = 0;
	while (exponent == -1) {
		if (boolInt[index] == 1) {
			exponent = pointPos-index-1;
		}
		index++;
	}


}
string strDiv2(string s) {
	string substr; bool mem = 0;
	for (int i = 0; i < s.size(); i++) {
		substr.push_back(((mem * 10 + (s[i] - '0')) / 2) + '0');
		mem = (mem * 10 + (s[i] - '0')) % 2;
	}
	return substr;
}