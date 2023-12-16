#pragma once
#include <string>
#include <cliext/vector>
#include "Point.h"
using namespace std;

ref class PlayfairCipher {
public:
    PlayfairCipher(int size);
    string Encrypt(string plainText, string key);
    string Decrypt(string cipherText, string key);
    void print();
    cliext::vector<cliext::vector<string>> getMatrix();

private:
    cliext::vector<cliext::vector<string>> playfairMatrix;
    void createKeyMatrix(string& key);
    void encryptCoordinates(Point* a, Point* b);
    void decryptCoordinates(Point* a, Point* b);
    char getLetterOfPoint(Point* a);
    Point* getPointOfLetter(char letter);
    int Mod(int x, int m);
    

    //virtual ~PlayfairCipher(void);
};


