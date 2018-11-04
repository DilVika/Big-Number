#include"QINT.h"
#include"QFloat.h"
int main() {
	QINT a,b,res;
	a.input();
	b.input();

	res = a * b;
	cout << "res = " << res.toDec() << endl;

	QFloat d;
	d.input();
	cout << "QFloat binary : " << bool2Str(d.data2Bin()) << endl;
	system("pause");
	return 0;
}