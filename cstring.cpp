#include <iostream>
#include <cstring> //header file for using C style string
using namespace std;

int main() {
    char str1[] = "Hello";
    char str2[] = " world!";
    char str3[100];
    // strcat(str2, str1); // strncat(str3, str2, 3); //with size limit
    // strcpy(str3, str2);
    // strncpy(str3, str1, 3); //with size limit
    // cout << "str3 after strcpy(str3, str1) = " << str3 << endl;
    
    // strcat(str3, str2); 
    // strncat(str3, str2, 3); //with size limit
    // cout << "str3 after strcat(str3, str2) = " << str3 << endl;
    
    // int len = strlen(str2); // string length
    // cout << "Length of str3 = " << len << endl;
    
    // string comparison
    // int cmp = strcmp(str1, str2); 
    // // strncmp(str1, str2, 3); //with size limit
    // if(cmp == 0)
    //     cout << "str1 and str2 are equal." << endl;
    // else if(cmp < 0)
    //     cout << "str1 is less than str2." << endl;
    // else
    //     cout << "str1 is greater than str2." << endl;
    
    // string search
    // char* ptr = strstr(str3, "world"); //char *ptr = strrchr(str1, 'l'); string search from right
    // if(ptr != nullptr)
    //     cout << "Substring 'world' found in str3 at position " << ptr - str3 << endl;
    // else
    //     cout << "Substring 'world' not found in str3." << endl;

    //string tokenization
    char *tok = strtok(str1, " ");
    while (tok != nullptr) {
        cout << tok << endl;
        tok = strtok(nullptr, " ");
    }    

    // char src[] = "Working in C++";
    // char dest1[100];
    // char dest2[100];
    
    // memcpy(dest1, src, strlen(src) + 1); // Copy the string using memcpy()
    // cout << "Copied string using memcpy(): " << dest1 << endl;

    
    // memset(dest2, 0, sizeof(dest2)); // Initialize dest2 char array with zeros 
    // cout << "Array after filling with zeros using memset(): " << dest2 << endl;
    
    return 0;
}