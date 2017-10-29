// CaesarCipher.cpp : This basic application demonstrates easy encryption by caesar ciphering
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;


void string_encrypt() {
	string input;
	string offset;
	cout << "String to encrypt: ";
	getline(cin, input);
	cout << "Offset [1-26]: ";
	getline(cin, offset);


	string encrypted;
	for (int i = 0; i < input.size(); i++)
	{
		encrypted += (char) ((int)input.at(i) + stoi(offset));
	}

	cout << "Encrypted string is: " << encrypted << endl;
	getchar();
}

void string_decrypt() {
	string input;
	string offset;
	cout << "String to decrypt: ";
	getline(cin, input);
	cout << "Offset [eg. 5]: ";
	getline(cin, offset);


	string decrypt;
	for (int i = 0; i < input.size(); i++)
	{
		decrypt += (char)((int)input.at(i) - stoi(offset));
	}

	cout << "Decrypted string is: " << decrypt << endl;
	getchar();
}

void error() {
	cout << "No mode specified. Press the return key to exit." << endl;
	getchar();
}	

int main()
{
	string encrypt = "Encrypt";
		string input;
		cout << "Mode (Encrypt/Decrypt): ";
		getline(cin, input);

		if (input == "Encrypt")
			string_encrypt();
		else if (input == "Decrypt")
			string_decrypt();
		else
			error();
    return 0;
}

