#pragma once
#include "SpFunc.h"


class QINT {
private:
	uint64_t data[2];
public:
	//*** Constructor ***
	// Default with value = 0
	QINT();
	QINT(int64_t N);
	// Inicialize with string number
	QINT(std::string s);
	// Inicialize with hexa array

	// Copy Constructor
	QINT(const QINT& Q);
	// Inicialize with binary array
	QINT(bool *a);

	// Set value from keyboard
	void input();
	// Store value to variale
	void stored(std::string s);
	// Get binary array
	bool* data2Bin()const;
	// Get two's compliment binary array
	bool* data2BinOffSet2()const;
	// Print binary array
	void outBoolStr();

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
	std::string toDec();
};