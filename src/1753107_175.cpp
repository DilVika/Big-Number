#include"QINT.h"
#include"QFloat.h"
int main(int argc, char ** argv) {
	QINT a,b,res;
	a.input();
	b.input();

	res = a * b;
	cout << "Dec = " << res.toDec() << endl;
	cout << "Hex = " << bin2Hex(res.data2Bin()) << endl;

	QFloat d;
	d.input();
	cout << "QFloat binary : " << bool2Str(d.data2Bin()) << endl;
	system("pause");
	return 0;
}