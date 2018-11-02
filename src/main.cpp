#include "QINT.h"
#include <string>
#include <iostream>

int main() {
	QINT a,b,c;
	a.input();
	b.input();
	
	int z = -5;

	c = a * b;

	cout << a.toDec();
	system("pause");
	return 1;
}