#pragma once
#include<iostream>

using namespace std;

#define bit 32

class QFloat {
private:
	uint64_t high;
	uint64_t low;
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