#pragma once
#include<iostream>
#include<string>
#include<fstream>

#define bit 128
using namespace std;

// ***  Class Prototype  ***
//class QINT;
//class QFloat;

// *****  Support Functions *****

// Load file

// Save to file


// Convert any bool array to int with lenght
uint64_t bitArrayToDec(bool arr[], int start, int end);
// Divide string by 2
// input: string | output: string
string strDiv2(string s);
// Convert Decimal number to Binary array
bool* decToBin(uint64_t n);
// Connect 2 binary array to 1 binary array
bool* connect2Bin(bool*first, bool*last, int n);
// Convert bool array to string
string bool2Str(bool *a);

// ************ QFloat ************
// Convert string Float to Binary array
// input: string | output: bool array
bool* strFloat2Bin(string s);
// Multiply string by 2
// input: string | output: string
string strMul2(string s, bool &mem);
// Convert Decimail Exponent in Floating poing to binary array
bool* dec2BinExpo(uint16_t n);
// Merge 2 binary array to 1 binary array
void merge(bool *des, bool * a, int start, int size);
// Merge Int binary with Fraction binary
bool* mergeIntFrac(string Int, string Frac);

// ************ QInt **************

// Convert string Int to Binary array
// input: string | output: bool array
bool* strInt2Bin(string s);
// Shift Right bool array 1 bit 
void shiftRight1Bit(bool*a, bool head);
// Shift Left bool array 1 bit 
void shiftLeft1Bit(bool*a, bool tail);
// Check bool array in decimal == 0
bool checkEqualZero(bool *a);
// Convert binary array to two's complement
bool* convertToOffset2(bool* a);

string addByString(string a, string b);
string trim(string a);