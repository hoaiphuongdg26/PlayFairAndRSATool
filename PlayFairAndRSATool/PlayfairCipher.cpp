#pragma
#include "pch.h"
#include "PlayfairCipher.h"
#include <iostream>
using namespace std;

PlayfairCipher::PlayfairCipher(int size)
{
	matrixSize = size;
	playfairMatrix = (char**)malloc(sizeof(char*) * size);
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
				if (sanitizedKey[i] == alphabet[j]) {
					alphabet.erase(j, 1);
				}
			}
		}
		sanitizedKey.append(alphabet);
	}
	else {

	}
	int index = 0;
	for (int row = 0; row < 5; row++) {
		for (int column = 0; column < 5; column++) {
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
	for (unsigned int i = 0; i < input.size() - 1; i += 2) {
		Point* a = getPointOfLetter(input[i]);
		Point* b = getPointOfLetter(input[i + 1]);

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

	for (unsigned int i = 0; i < cipherText.size() - 1; i += 2) {
		Point* a = getPointOfLetter(cipherText[i]);
		Point* b = getPointOfLetter(cipherText[i + 1]);

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