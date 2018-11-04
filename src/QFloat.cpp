#include"QFloat.h"
void QFloat::input() {
	string s;
	cout << "Enter N: ";
	cin >> s;
	stored(s);
}
void QFloat::stored(string s)
{
	bool*str = strFloat2Bin(s);
	high = bitArrayToDec(str, 0, 63);   // convert bit/4 element from bool array to unsigned decimal
	low = bitArrayToDec(str, 64, 127);
	delete[]str;
}
bool * QFloat::data2Bin()const
{
	bool* a = decToBin(this->high);
	bool* b = decToBin(this->low);
	bool* c = connect2Bin(a, b, bit);

	delete[]a;
	delete[]b;
	return c;
}
void QFloat::outBoolStr() {
	bool *a = this->data2Bin();
	cout << a[0] << " ";
	for (int i = 1; i < 16; i++)
		cout << a[i];
	cout << " ";
	for (int i = 16; i < bit; i++) {
		//if (i % 4 == 0 && i > 0)
			//cout << " ";
		cout << a[i];
	}
	delete[]a;
}

// *********   Constructor  ***********

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