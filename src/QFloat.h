#pragma once
#include<iostream>
#include<string>
using namespace std;

#define bit 128

class QFloat {
private:
	uint64_t high;
	uint64_t low;
public:
	QFloat();
	QFloat(string s);
	QFloat(const QFloat & Q);
	QFloat(bool *a);
	void input();
	void stored(string s);

	/*
	bool* data2Bin()const;
	bool* data2BinOffSet2()const;

	*/
};