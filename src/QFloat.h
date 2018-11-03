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

uint64_t bitArrayToDec(bool arr[], int start, int end);
bool* str2Bin(string s);
string strDiv2(string s);
string strMul2(string s ,bool &mem);
bool* dec2BinExpo(uint16_t n);
void merge(bool *des, bool * a, int start, int size);
bool* mergeIntFrac(string Int, string Frac);
void outBoolStr(bool * a);