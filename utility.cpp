/*
 * utility.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * <Ruben Furst>
 * <#Uniqnames#>
 *
 * EECS 183: Project 3
 * Winter 2023
 *
 * <#description#>
 */

#include "utility.h"
#include <iostream>


string toUpperCase(string original) {
    // TODO: implement
    string newString;
    int count = 0;
    for(char i; count < original.size(); ++count){
        i = original[count];
        if(isalpha(i)){
            i = toupper(i);
            newString += i;
        }
        else {
            newString += i;
        }
    }
    return newString;
}

string removeNonAlphas(string original) {
    // TODO: implement
    string newString;
    int count = 0;
    for(char i; count < original.size(); ++count){
        i = original[count];
        if(isalpha(i)){
            newString += i;
        }
    }
    return newString;
}

string removeDuplicate(string original) {
    // TODO: implement
    string newString;
    int count = 0;
    for(char i; count < original.size(); ++count){
        i = original[count];
        if(newString.find(i) == -1){
            newString += i;
        }
    }
    return newString;
}

int charToInt(char original) {
    // TODO: implement
    return int(original - '0');
}

////////////////////////////////////////////////////////////////////////////////
// Do not touch code below. ////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void printGrid(const char grid[SIZE][SIZE]) {
    for (int col = 0; col < SIZE; col++) {
        cout << " ---";
    }
    cout << endl;
    for (int row = 0; row < SIZE; row++) {
        cout << "| ";
        for (int col = 0; col < SIZE; col++) {
            cout << string(1, grid[row][col]) + " | ";
        }
        cout << endl;
        for (int col = 0; col < SIZE; col++) {
            cout << " ---";
        }
        cout << endl;
    }
}
