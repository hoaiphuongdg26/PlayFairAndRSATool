#pragma once
#ifndef RSA_RSA_UTILS_H
#define RSA_RSA_UTILS_H
#include <openssl/bn.h>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

// Các hàm chuyển đổi kiểu dữ liệu
BIGNUM* ConvertCharToAsciiBIGNUM(char character);
char ConvertBIGNUMToChar(const BIGNUM* asciiValue);
BIGNUM* ConvertStringToBIGNUM(System::String^ input);
System::String^ ConvertBIGNUMToString(BIGNUM* number);
System::String^ ConvertBIGNUMVectorToString(const vector<BIGNUM*>& bignumVector);

// Các hàm tạo dữ liệu đầu vào
BIGNUM* createRandomPrime(int numBits);
BIGNUM* createRandomPrime_e(BIGNUM* phiN);
bool checkEConditions(BIGNUM* e, BIGNUM* phiN);
BIGNUM* ExtendedEuclidean(BIGNUM* a, BIGNUM* b, BIGNUM* x, BIGNUM* y);
BIGNUM* calculateD(BIGNUM* e, BIGNUM* phiN);

// Các hàm sử dụng mã hoá, giải mã
int calculateBlockLength(const BIGNUM* N);
vector<string> splitStringIntoBlocks(string input, int blockLength);
System::String^ EncryptStringOrNumber(const string input, const BIGNUM* e, const BIGNUM* N);

vector<BIGNUM*> ConvertToVector(string input);
System::String^ Decrypt(string input, const BIGNUM* d, const BIGNUM* N);

#endif //RSA_RSA_UTILS_H