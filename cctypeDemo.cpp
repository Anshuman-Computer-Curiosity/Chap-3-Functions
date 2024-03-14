//program to count number of  alphabetic character, digit, 
//alphanumeric,  lowercase character,  uppercase character, 
//whitesapce in a given string. 
//Also convert string to uppercase

#include <iostream>
#include <cctype> //header file for C language ctype
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);   //Input string

    //Intialize all variables count to 0
    int alphaCount = 0;
    int digitCount = 0;
    int alnumCount = 0;
    int lowerCount = 0;
    int upperCount = 0;
    int spaceCount = 0;

    // count characters
    for (int i = 0; i < input.length(); i++) {
        char c = input[i]; // store each character of string in var. c - one by one
        if (isalpha(c)) { //a-z, A-Z, 0-9
            alphaCount++;
            if (islower(c)) { //a-z
                lowerCount++;
            }
            else {
                upperCount++; //A-Z
            }
        }
        else if (isdigit(c)) { //0-9
            digitCount++;
            alnumCount++;
        }
        else if (isspace(c)) { // '  ' 
            spaceCount++;
        }
    }

    alnumCount = alphaCount + digitCount; //total

    cout << "Alphabetic characters = " << alphaCount << endl;
    cout << "Digits = " << digitCount << endl;
    cout << "Alphanumeric characters = " << alnumCount << endl;
    cout << "Lowercase characters = " << lowerCount << endl;
    cout << "Uppercase characters = " << upperCount << endl;
    cout << "Whitespace = " << spaceCount << endl;

    // convert to uppercase
    for (int i = 0; i < input.length(); i++) {
        input[i] = toupper(input[i]);
    }

    cout << "Uppercase string =  " << input << endl;

    return 0;
}