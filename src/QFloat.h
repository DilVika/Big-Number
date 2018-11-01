#pragma once
#include<iostream>

using namespace std;

#define bit 32

class QFloat {
private:
	uint16_t signAndExponnent;
	uint16_t frac0;
	uint32_t frac1;
	uint64_t frac2;
public:
	QFloat();
	/*
	QFloat(string s);
	QFloat(const QFloat & Q);
	QFloat(bool* a);

	void stored(string s);
	bool* data2Bin()const;
	bool* data2BinOffSet2()const;

	QFloat& operator=(const QFloat &Q);
	QFloat& operator=(const char*);
	*/
};