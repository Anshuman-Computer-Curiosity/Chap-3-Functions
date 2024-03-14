#include <iostream>
using namespace std;
 int global ;
int func1();
int main(){
    int local = 23;
    cout<< "Local =  " << local <<endl;
    cout<< "Global = " << global <<endl;
    for(int i=0;i<3;i++)
       cout<<"Value returned = "<<func1()<<endl;
    return 0;
}
int func1(){
    // int localVar = 15  ;
    static int localStatic = 20;
    // localVar += 10;
    localStatic += 20;
    // global += 30;
    // return(localVar);
    return(localStatic);
    // return(global);
}
