// Lab5_TD.cpp : This file contains the 'main' function. Program execution begins and ends there. //

#include <iostream>
#include <vector>
#include <string>

using namespace std;

char cypherChar(char ch, const vector<char>& cypher) {
    if (ch >= 65 && ch <= 90) {
        return cypher[ch - 65];
    } 
    else if (ch >= 97 && ch <= 122) {
        char upperChar = ch - 32;
        return cypher[upperChar - 65] + 32;
    } 
    else {
        return ch;
    }
}

int main() {
    vector<char> cypher = {'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E'};
    
    string text;
    cout << "Enter a string (up to 128 characters): ";
    getline(cin, text);
    
    string result = "";
    for (char ch : text) {
        result += cypherChar(ch, cypher);
    }

    cout << "Encoded Message: \"" << result << "\"" << endl;
    
    return 0;
}
