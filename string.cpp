#include <iostream>
#include <string> //Header file for C++ style string

using namespace std;

int main() {
    
    string str = "Hello, World!"; // Define a string variable
    cout << "Original string = " << str << endl;

    // Get the length of the string
    // cout << "Length of string = " << str.length() << endl;

    // Append another string to the original string
    // str.append(" Good Morning");
    // cout << "Appended string = " << str << endl;

    // Get a substring of the original string
    // string sub1 = str.substr(7, 5);
    // cout << "Substring =  " << sub1 << endl;

    
    // str.replace(0, 5, "Hi"); // Replace part of the string
    // cout << "Replaced string: " << str << endl;

    
    // size_t pos = str.find('W');// Find a character in the string
    // cout << "Position of 'W': " << pos << endl;

    // Convert the string to uppercase
    for (size_t i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
    cout << "Uppercase string: " << str << endl;

    return 0;
}