#pragma
#include "pch.h"
#include "PlayfairCipher.h"
#include <iostream>
#include "Sanitizer.h"
using namespace std;

PlayfairCipher::PlayfairCipher(int size)
{
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
	string alphabet = "ABCDEFGHIKLMNOPQRSTUVWXYZ";
	string sanitizedKey = Sanitizer::sanitizeInputKey(key);
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
	int index = 0;
	for (int row = 0; row < 5; row++) {
		for (int column = 0; column < 5; column++) {
			playfairMatrix[row][column] = sanitizedKey[index];
			index++;
		}
	}
}
void PlayfairCipher::print()
{
	for (int row = 0; row < 5; row++) {
		for (int column = 0; column < 5; column++) {
			playfairMatrix[row][column];
		}
		cout << endl;
	}
}
char** PlayfairCipher::getMatrix() {
	return playfairMatrix;
}