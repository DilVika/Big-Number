#pragma once
#include <iostream>
#include <string>
#define bit 128

using namespace std;

class QINT {
private:
	// variable store value
	uint64_t data[2];
public:
	// Inicialize Constructor
	QINT();
	QINT(int64_t N);
	QINT(string s);
	QINT(const QINT& Q);
	QINT(bool *a);

	// Set value from keyboard
	// input: none | output: none
	void input();
	// temporary func to check value has been stored
	void output();

	// store value to data from string
	// input: string | output: none
	void stored(string s);
	bool* data2Bin()const;
	bool* data2BinOffSet2()const;

	// asssignment
	QINT& operator=(const QINT &Q);

	//bit operator
	friend QINT operator &(const QINT &Q1, const QINT &Q2);
	friend QINT operator |(const QINT &Q1, const QINT &Q2);
	friend QINT operator ^(const QINT &Q1, const QINT &Q2);
	friend QINT operator ~(const QINT &Q1);
	// Math operator
	friend QINT operator+(const QINT &Q1, const QINT &Q2);
	friend QINT operator-(const QINT &Q1, const QINT &Q2);

	friend QINT operator*(const QINT &M1, const QINT &Q2);
	friend QINT operator/(const QINT &M1, const QINT &Q2);
	// shift 
	friend QINT operator <<(const QINT &Q,int n);
	friend QINT operator >>(const QINT &Q,int n);
	friend QINT shiftRightNoneSign(const QINT &Q, int n);
	// rotate
	friend QINT rol(const QINT &Q, int n);
	friend QINT ror(const QINT &Q, int n);
	
	// Value
	QINT OffSet2();
	string toDec();
	
};

//Support Functions.

uint64_t bitArrayToDec(bool arr[], int start, int end);
string strDiv2(string s);
bool* strToBin(string s);
bool* decToBin(uint64_t n);
//string boolToStr(bool*a,int start,int end);
bool* connect2Bin(bool*first, bool*last, int n);
void shiftRight1Bit(bool*a, bool head);
void shiftLeft1Bit(bool*a, bool tail);
bool checkEqualZero(bool *a);
bool* convertToOffset2(bool* a);
void outBoolStr(bool * a);

string addByString(string a, string b);
