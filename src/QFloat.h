#pragma once
#include"SpFunc.h"

class QFloat {
private:
	uint64_t high;
	uint64_t low;
public:
	//*** Constructor ***
	// Default with value = 0
	QFloat();
	// Inicialize with string number
	QFloat(string s);
	// Copy Constructor
	QFloat(const QFloat & Q);
	// Inicialize with binary array
	QFloat(bool *a);

	// Set value from keyboard
	void input();
	// Store value to variale
	void stored(string s);
	// Get binary array
	bool* data2Bin()const;
	// Print binary array
	void outBoolStr();
};