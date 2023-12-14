#pragma
#include "pch.h"
#include "PlayfairCipher.h"
#include <iostream>
using namespace std;

PlayfairCipher::PlayfairCipher(int size)
{
	matrixSize = size;
	playfairMatrix = (char**)malloc(sizeof(char*) * size);
	if (size == 5) {
		//----------------------Matrix 5x5 -----------------------------
		char t = 'A';
		for (int i = 0; i < size; i++) {
			playfairMatrix[i] = (char*)malloc(sizeof(char) * size);
			for (int j = 0; j < size; j++) {
				if (t == 'J') t++;
				playfairMatrix[i][j] = char(t);
				t++;
			}
		}
	}
	else {
		//----------------------Matrix 6x6 -----------------------------
		string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
		int index = 0;
		for (int i = 0; i < size; i++) {
			playfairMatrix[i] = (char*)malloc(sizeof(char) * size);
			for (int j = 0; j < size; j++) {
				playfairMatrix[i][j] = char(alphabet[index++]);
			}
		}
	}
}
void PlayfairCipher::createKeyMatrix(string key)
{
	string sanitizedKey = Sanitizer::sanitizeInputKey(key);
	if (matrixSize == 5) {
		string alphabet = "ABCDEFGHIKLMNOPQRSTUVWXYZ";
		for (unsigned int i = 0; i < sanitizedKey.size(); i++) {
			if (sanitizedKey[i] > 'Z' || sanitizedKey[i] < 'A') {
				sanitizedKey.erase(i, 1); i--;
			}
		}
		int chars[128] = { 0 };
		for (unsigned int i = 0; i < sanitizedKey.size(); i++) {
			if (sanitizedKey[i] == 'J') sanitizedKey[i] = 'I';
			chars[sanitizedKey[i]]++;
			if (chars[sanitizedKey[i]] > 1) { sanitizedKey.erase(i, 1); i--; }
		}

		for (unsigned int i = 0; i < sanitizedKey.size(); i++) {
			for (int j = 0; j < alphabet.size(); j++) {
				//dam bao cac ki tu co trong key khong xuat hien trong alphabet
				if (sanitizedKey[i] == alphabet[j]) {
					alphabet.erase(j, 1);
				}
			}
		}
		//gan alphabet vao sau key
		sanitizedKey.append(alphabet);
	}
	else {
		string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
		for (unsigned int i = 0; i < sanitizedKey.size(); i++) {
			if ((sanitizedKey[i] < '0') || (sanitizedKey[i] < 'A' && sanitizedKey[i] > '9') || (sanitizedKey[i] > 'Z')) {
				sanitizedKey.erase(i, 1); i--;
			}
		}
		int chars[128] = { 0 };
		for (unsigned int i = 0; i < sanitizedKey.size(); i++) {
			chars[sanitizedKey[i]]++;
			//check so lan xuat hien cua ki tu
			if (chars[sanitizedKey[i]] > 1) { sanitizedKey.erase(i, 1); i--; }
		}
		for (unsigned int i = 0; i < sanitizedKey.size(); i++) {
			for (int j = 0; j < alphabet.size(); j++) {
				//dam bao cac ki tu co trong key khong xuat hien trong alphabet
				if (sanitizedKey[i] == alphabet[j]) {
					alphabet.erase(j, 1);
				}
			}
		}
		//gan alphabet vao sau key
		sanitizedKey.append(alphabet);
	}
	int index = 0;
	for (int row = 0; row < matrixSize; row++) {
		for (int column = 0; column < matrixSize; column++) {
			playfairMatrix[row][column] = sanitizedKey[index];
			index++;
		}
	}
}
//void PlayfairCipher::print()
//{
//	for (int row = 0; row < 5; row++) {
//		for (int column = 0; column < 5; column++) {
//			playfairMatrix[row][column];
//		}
//		cout << endl;
//	}
//}
char** PlayfairCipher::getMatrix() {
	return playfairMatrix;
}
Point* PlayfairCipher::getPointOfLetter(char letter) {
	for (int i = 0; i < matrixSize; i++) {
		for (int j = 0; j < matrixSize; j++) {
			if (playfairMatrix[i][j] == letter) {
				return new Point(i, j);
			}
		}
	}
	return NULL;
}
char PlayfairCipher::getLetterOfPoint(Point* a)
{
	return playfairMatrix[a->row][a->column];
}
string PlayfairCipher::Encrypt(string input)
{
	Point* a = new Point(0, 0);
	Point* b = new Point(0, 0);
	for (unsigned int i = 0; i < input.size() - 1; i += 2) {
		a = getPointOfLetter(input[i]);
		b = getPointOfLetter(input[i + 1]);

		encryptCoordinates(a, b);

		input[i] = getLetterOfPoint(a);
		input[i + 1] = getLetterOfPoint(b);
	}
	return input;
}
void PlayfairCipher::encryptCoordinates(Point* a, Point* b) {
	if (a->column == b->column) {
		a->row = (a->row + 1) % matrixSize;
		b->row = (b->row + 1) % matrixSize;
	}
	else if (a->row == b->row) {
		a->column = (a->column + 1) % matrixSize;
		b->column = (b->column + 1) % matrixSize;
	}
	else {
		int temp = a->column;
		a->column = b->column;
		b->column = temp;
	}
}
string PlayfairCipher::Decrypt(string cipherText)
{
	Point* a = new Point(0, 0);
	Point* b = new Point(0, 0);
	for (unsigned int i = 0; i < cipherText.size() - 1; i += 2) {
		a = getPointOfLetter(cipherText[i]);
		b = getPointOfLetter(cipherText[i + 1]);

		decryptCoordinates(a, b);

		cipherText[i] = getLetterOfPoint(a);
		cipherText[i + 1] = getLetterOfPoint(b);
	}
	return cipherText;
}
void PlayfairCipher::decryptCoordinates(Point* a, Point* b) {
	if (a->column == b->column) {
		a->row = Mod(a->row - 1, matrixSize);
		b->row = Mod(b->row - 1, matrixSize);
	}
	else if (a->row == b->row) {
		a->column = Mod(a->column - 1, matrixSize);
		b->column = Mod(b->column - 1, matrixSize);
	}
	else {
		int temp = a->column;
		a->column = b->column;
		b->column = temp;
	}
}


int PlayfairCipher::Mod(int x, int m)
{
	int r = x % m;
	return r < 0 ? r + m : r;
}

