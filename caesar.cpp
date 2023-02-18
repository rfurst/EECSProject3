/*
 * caesar.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * <Ruben Furst, Adam Bahri>
 * <rfurst, >
 *
 * EECS 183: Project 3
 * Winter 2023
 *
 * <This file contains all functions required to decrypt a Caesar cipher>
 */

#include "caesar.h"
#include <iostream>

 /*
  * Requires: c is an alphabetical character.
  * Modifies: Nothing.
  * Effects:  Returns c shifted by n characters.
  *           If c is lowercase, it will remain lowercase.
  *           If c is uppercase, it will remain uppercase.
  * Used in:  caesarCipher.
  */
char shiftAlphaCharacter(char c, int n) {
	char upperChar = toupper(c);
	int shiftedCharInt = ((upperChar - 'A') + n) % 26;
	if (shiftedCharInt < 0) {
		shiftedCharInt += 26;
	}
	char shiftedChar = shiftedCharInt + 'A';

	// Convert the shifted character to the original case
	if (islower(c)) {
		return tolower(shiftedChar);
	}
	else {
		return shiftedChar;
	}

	/*if (isupper(c)) {
		return char(int(c + n - 65) % 26 + 65);
	}
	else {
		return char(int(c + n - 97) % 26 + 97);
	}*/
}



	/*if (isupper(c)) {
		int charInt = int(c);
		if (n >= 0) {
			int newNum = n + charInt;
			if (newNum > 90) {
				return char((((n - (90 - charInt)) % 26) + int('A')) - 1);
			}
			else {
				return char(newNum);
			}
		}
		else {
			int newNum = charInt + n;
			if (newNum < 65) {
				int remainder = n % 26;
				return char(int('Z') - (remainder + 1));
			}
			else {
				return char(newNum);
			}
		}

	}
	else {
		int charInt = int(c);
		if (n >= 0) {
			int newNum = n + charInt;
			if (newNum > 122) {
				return char((((n - (90 - charInt)) % 26) + int('a'))-7);
			}
			else {
				return char(newNum);
			}
		}
		else {
			int newNum = charInt + n;
			if (newNum < 97) {
				int remainder = n % 26;
				return char(int('z') - (remainder + 1));
			}
			else {
				return char(newNum);
			}
		}

	}
}*/

string caesarCipher(string original, int key, bool encrypt) {
	if (encrypt) {
		string newString = "";
		for (int i = 0; i < original.size(); ++i) {
			if (original[i] != ' ') {
				char newChar = shiftAlphaCharacter(original[i], key);
				newString += newChar;
			}
			else {
				newString += original[i];
			}
		}
		return newString;
	}
	else {
		string newString = "";
		for (int i = 0; i < original.size(); ++i) {
			if (original[i] != ' ') {
				if (isupper(original[i])) {
					newString += (int(original[i] - key - 65 + 26) % 26 + 65);
				}
				else {
					newString += (int(original[i] - key - 97 + 26) % 26 + 97);
				}
			}
			else {
				newString += original[i];
			}
		}
		/*for (int i = 0; i < original.size(); ++i) {
			if (original[i] != ' ') {
				char newChar = shiftAlphaCharacter(original[i], -key);
				newString += newChar;
			}
			else {
				newString += original[i];
			}*/
		return newString;
	}
}