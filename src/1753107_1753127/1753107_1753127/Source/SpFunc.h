#pragma once

#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>

#define bit 128

//using namespace std;

// ***  Class Prototype  ***
//class QINT;
//class QFloat;

// *****  Support Functions *****

// Convert any binary array to hexa array
std::string bin2Hex(bool*a);
// Convert Hex array to binary array
bool* hex2Bin(std::string s);
// Convert any bool array to int with lenght
uint64_t bitArrayToDec(bool arr[], int start, int end);
// Divide string by 2
// input: string | output: string
std::string strDiv2(std::string s);
// Convert Decimal number to Binary array
bool* decToBin(uint64_t n);
// Connect 2 binary array to 1 binary array
bool* connect2Bin(bool*first, bool*last, int n);
// Convert bool array to string
std::string bool2Str(bool *a);
// string binary to bool array
bool * str2Bool(std::string s);
// Auto testing
void AutoTest(char*input, char*output);


// ************ QFloat ************
// Convert string Float to Binary array
// input: string | output: bool array
bool* strFloat2Bin(std::string s);
// Multiply string by 2
// input: string | output: string
std::string strMul2(std::string s, bool &mem);
// Convert Decimail Exponent in Floating poing to binary array
bool* dec2BinExpo(uint16_t n);
// Merge 2 binary array to 1 binary array
void merge(bool *des, bool * a, int start, int size);
// Merge Int binary with Fraction binary
bool* mergeIntFrac(std::string Int, std::string Frac);
// Convert Double Number to Int
std::string convertDoubToInt(std::string str);

// ************ QInt **************

// Convert string Int to Binary array
// input: string | output: bool array
bool* strInt2Bin(std::string s);
// Shift Right bool array 1 bit 
void shiftRight1Bit(bool*a, bool head);
// Shift Left bool array 1 bit 
void shiftLeft1Bit(bool*a, bool tail);
// Check bool array in decimal == 0
bool checkEqualZero(bool *a);
// Convert binary array to two's complement
bool* convertToOffset2(bool* a);

std::string addByString(std::string a, std::string b);
std::string trim(std::string a);