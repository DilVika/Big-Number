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

	string intStr;
	intStr = s.substr(startPos, pointPos - startPos);



	string fracStr;

}
