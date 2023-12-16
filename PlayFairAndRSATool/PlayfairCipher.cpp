#pragma
#include "pch.h"
#include "PlayFairForm.h"
#include "PlayfairCipher.h"
#include <iostream>
#include "Sanitizer.h"
using namespace std;

PlayfairCipher::PlayfairCipher(int size)
{
	playfairMatrix.resize(size);
	for (int i = 0; i < size; ++i) {
		playfairMatrix[i].resize(size);
	}
}
void PlayfairCipher::createKeyMatrix(string& key)
{
	string alphabet = "abcdefghiklmnopqrstuvwxyz";
	string sanitizedKey = Sanitizer::sanitizeInputKey(key);
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
			playfairMatrix.at(row).at(column) = sanitizedKey[index];
			index++;
		}
	}
}
void PlayfairCipher::print()
{
	for (int row = 0; row < 5; row++) {
		for (int column = 0; column < 5; column++) {
			playfairMatrix.at(0).at(0);
		}
		cout << endl;
	}
}
cliext::vector<cliext::vector<string>> PlayfairCipher::getMatrix() {
	return playfairMatrix;
}