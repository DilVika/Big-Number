#include"QINT.h"
#include"QFloat.h"
int main(int argc, char ** argv) {
	if (argc == 3) {
		AutoTest(argv[1], argv[2]);
		return 0;
	}
	QINT a,b,res;
	a.input();
	b.input();

	res = a + b;
	cout << "Bin = " << bool2Str(res.data2Bin()) << endl;
	cout << "Dec = " << res.toDec() << endl;
	cout << "Hex = " << bin2Hex(res.data2Bin()) << endl;

	system("pause");
	return 0;
}