#include "QINT.h"
#include <string>
#include <iostream>

int main() {
	QINT a,b,c;
	a.input();
	b.input();

	c = a + b;
	


	cout << c.toDec() << endl;

	system("pause");
	return 1;
}