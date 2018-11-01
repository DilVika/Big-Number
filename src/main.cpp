#include "QINT.h"
#include <string>
#include <iostream>

int main() {
	QINT a,b,c;
	a.input();
	b.input();
	
	int z = -5;

	cout << to_string(z);

	c = a*b;
	
	//c.output();
	//string f = "Disconmemeay";
	//cout << f.size() << endl;
	string z = " 1235 46";
	string z1 = "+";
	z1 += "123245";
	cout << z1;

	//cout << c.toDec();
	system("pause");
	return 1;
}