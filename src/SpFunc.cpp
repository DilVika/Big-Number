#include "QINT.h"
// Chia đôi dãy số kiểu char
// input: string | output: string
string strDiv2(string s) {
	string substr; bool mem = 0;
	for (int i = 0; i < s.size(); i++) {
		substr.push_back(((mem * 10 + (s[i] - '0')) / 2) + '0');
		mem = (mem * 10 + (s[i] - '0')) % 2;
	}
	return substr;
}
// Convert string to Binary array
// input: string | output: bool array
bool* strToBin(string s) {
	// Inicialize bool array with value 0
	bool *a = new bool[bit];
	for (int i = 0; i < bit; i++)
		a[i] = 0;

	int k = bit - 1;

	string substr;
	// case: negative number
	if (s[0] == '-') {
		substr = s.substr(1, s.size() - 1);
	}
	else substr = s;
	// devide and pushback to bool array
	while (k >= 0) {
		int x = ((substr[substr.length() - 1] - '0') % 2);
		a[k] = x;
		k--;
		substr = strDiv2(substr);
	}
	// case: negative number -> get offset 2
	if (s[0] == '-') {
		a = convertToOffset2(a);
	}
	return a;
}

bool* decToBin(unsigned long n) {
	bool* a = new bool[bit / 2];
	for (int i = bit / 2 - 1; i >= 0; i--)
		a[i] = (n >> bit / 2 - 1 - i) & 1;
	return a;
}

bool* connect2Bin(bool*first, bool*last, int n) {
	bool *c = new bool[n]; int j = 0;
	for (int i = 0; i < n / 2; i++) {
		c[j] = first[i];
		c[n / 2 + j] = last[i];
		j++;
	}
	return c;
}

bool* convertToOffset2(bool* a) {
	int pivot = bit - 1;
	// find '1' first from right
	for (int i = 1; (pivot >= 0) && i; pivot--)
		if (a[pivot]) break;
	// get offset 1 left side pivot
	for (int i = pivot - 1; i >= 0; i--)
		a[i] = !a[i];
	return a;
}
/*
string boolToStr(bool*a,int start,int end) {
	string substr;
	int j = 0;
	for (int i = start; i <= end; i++)
		substr.push_back(a[i]+'0');
	return substr;
}
*/

// Convert any bool array to int with lenght
// input: bool array , start & end index in bool array
// output: uchar
uint16_t bitArrayToDec(bool arr[], int start, int end)
{
	uint16_t ret = 0;
	uint16_t tmp;
	for (int i = start; i <= end; i++) {
		tmp = arr[i];
		ret |= tmp << (end - i);
	}
	return ret;
}
void shiftRight1Bit(bool*a, bool head) {
	for (int i = bit - 1; i >= 1; i--)
		a[i] = a[i - 1];
	a[0] = head;
}
void shiftLeft1Bit(bool*a, bool tail) {
	for (int i = 0; i < bit - 1; i++)
		a[i] = a[i + 1];
	a[bit - 1] = tail;
}
bool checkEqualZero(bool *a) {
	for (int i = 0; i < bit; i++)
		if (a[i]) return false;
	return true;
}

// test Func
void outBoolStr(bool * a) {
	for (int i = 0; i < bit; i++) {
		if (i % 4 == 0 && i > 0)
			cout << " ";
		cout << a[i];

	}
}

string addByString(string a, string b)
{
	int al = a.size() - 1;
	int bl = b.size() - 1;

	int carry = 0;
	string result = "";

	while (al >= 0 && bl >= 0)
	{
		int temp = (int)(a[al] - '0') + (int)(b[bl] - '0') + carry;
		carry = 0;
		if (temp > 9)
		{
			carry = 1;
			temp = temp - 10;
		}

		result += char(temp + '0');
		al--;
		bl--;
	}

	while (al >= 0)
	{
		int temp = (int)(a[al] - '0') + carry;
		carry = 0;
		if (temp > 9)
		{
			carry = 1;
			temp = temp % 10;
		}

		result += char(temp + '0');
		al--;
	}

	while (bl >= 0)
	{
		int temp = (int)(b[bl] - '0') + carry;
		carry = 0;
		if (temp > 9)
		{
			carry = 1;
			temp = temp % 10;
		}

		result += char(temp + '0');
		bl--;
	}

	if (carry)
		result += "1";

	string addition = "";

	for (int i = result.size() - 1; i >= 0; i--)
		addition += result[i];   // reversing the answer

	return addition;
}


string trim(string a)   // for removing leading 0s
{
	string res = "";
	int i = 0;

	while (a[i] == '0')
		i++;

	for (; i < a.size(); i++)
		res += a[i];

	return res;
}
