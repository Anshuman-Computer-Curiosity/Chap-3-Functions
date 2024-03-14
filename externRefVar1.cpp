// No need of intializing ref. variable here
#include <iostream>
using namespace std;
extern int& ref;//declared in this file

void printRef() {
    cout<<"ref = "<<ref<<endl;
}