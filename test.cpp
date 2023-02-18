/*
 * testProj3.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * <Ruben Furst, Adam Bahri>
 * <rfurst, >
 *
 * EECS 183: Project 3
 * Winter 2023
 * 
 * <Testing suite for functions in utility, caesar, polybius, and vignere>
 */


#include "utility.h"
#include "caesar.h"
#include "vigenere.h"
#include "polybius.h"
#include <iostream>
#include <string>

using namespace std;

void test_toUpperCase();
void test_removeNonAlphas();
void test_removeDuplicate();
void test_charToInt();
void test_shiftAlphaCharacter();
void test_caesarCipher();

void startTests() {
    test_toUpperCase();
    test_removeNonAlphas();
    test_removeDuplicate();
    test_charToInt();
    test_shiftAlphaCharacter();
    test_caesarCipher();

    return;
}

void test_toUpperCase() {
    cout << "Now testing function toUpperCase()" << endl;
    cout << "Expected: 'AA', Actual: '" << toUpperCase("aa") << "'" << endl;
    cout << "Expected: 'A1ZP$', Actual: '" << toUpperCase("a1zp$") << "'" << endl;
    cout << "Expected: '123', Actual: '" << toUpperCase("123") << "'" << endl;
    return;
}

void test_removeNonAlphas() {
    cout << "Now testing function removeNonAlphas()" << endl;
    cout << "Expected: 'EECS', Actual: '" << removeNonAlphas("EECS 183!") << "'" << endl;
    cout << "Expected: '', Actual: '" << removeNonAlphas("12345$") << "'" << endl;
    cout << "Expected: 'Ruben', Actual: '" << removeNonAlphas("Ruben") << "'" << endl;
    return;
}

void test_removeDuplicate() {
    cout << "Now testing function removeDuplicate()" << endl;
    cout << "Expected: 'Ruben', Actual: '" << removeDuplicate("RRuubbeenn") << "'" << endl;
    cout << "Expected: '$Ru3', Actual: '" << removeDuplicate("$$Ru33") << "'" << endl;
    cout << "Expected: ';$Rr', Actual: '" << removeDuplicate(";;$$Rrr") << "'" << endl;
    return;
}

void test_charToInt() {
    cout << "Now testing function charToInt()" << endl;
    cout << "Expected: '9', Actual: '" << charToInt('9') << "'" << endl;
    cout << "Expected: '18', Actual: '" << charToInt('9') + charToInt('9') << "'" << endl;
    cout << "Expected: 'int', Actual: '" << typeid(charToInt('9')).name() << "'" << endl;
    return;
}

void test_shiftAlphaCharacter() {
    cout << "Now testing function shiftAlphaCharacter()" << endl;
    cout << "Expected: 'b', Actual: '" << shiftAlphaCharacter('a',1) << "'" << endl;
    cout << "Expected: 'z', Actual: '" << shiftAlphaCharacter('a', -1) << "'" << endl;
    cout << "Expected: 'b', Actual: '" << shiftAlphaCharacter('a', 27) << "'" << endl;
    cout << "Expected: 'z', Actual: '" << shiftAlphaCharacter('a', -27) << "'" << endl;
    cout << "Expected: 'B', Actual: '" << shiftAlphaCharacter('A', 1) << "'" << endl;
    cout << "Expected: 'Z', Actual: '" << shiftAlphaCharacter('A', -1) << "'" << endl;
    cout << "Expected: 'E', Actual: '" << shiftAlphaCharacter('A', 30) << "'" << endl;
    cout << "Expected: 'Z', Actual: '" << shiftAlphaCharacter('A', -27) << "'" << endl;
    return;

}

void test_caesarCipher() {
    cout << "Now testing function caesarCipher()" << endl;
    cout << "Expected: 'bcde', Actual: '" << caesarCipher("abcd",1,true) << "'" << endl;
    cout << "Expected: 'abcd', Actual: '" << caesarCipher("bcde", 1, false) << "'" << endl;
    cout << "Expected: 'Lipps qc reqi mw Vyfir', Actual: '" << caesarCipher("Hello my name is Ruben", 30, true) << "'" << endl;
    cout << "Expected: 'Hello my name is Ruben', Actual: '" << caesarCipher("Lipps qc reqi mw Vyfir", 30, false) << "'" << endl;
    return;
}
