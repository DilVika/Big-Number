#include"QFloat.h"
void QFloat::input() {
	std::string s;
	std::cout << "Enter N: ";
	std::cin >> s;
	stored(s);
}
void QFloat::stored(std::string s)
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
	std::cout << a[0] << " ";
	for (int i = 1; i < 16; i++)
		std::cout << a[i];
	std::cout << " ";
	for (int i = 16; i < bit; i++) {
		//if (i % 4 == 0 && i > 0)
			//cout << " ";
		std::cout << a[i];
	}
	delete[]a;
}

// *********   Constructor  ***********

QFloat::QFloat()
{
	high = 0;
	low = 0;
}
QFloat::QFloat(std::string s)
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