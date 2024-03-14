//pointer vs reference variable - points 6 to 10
#include <iostream>
using namespace std;
int main() {
    double a =10.5;
    double *ptr1 = &a;
    double **ptr2 = &ptr1; //pointer to pointer to int 

    cout<< sizeof(ptr1)<<endl; // output - 4
    cout<< *ptr1<<endl; // output - 4
    double& refVar = a;
    // int &&refVar2 = 20; // r-value reference
    // int &&refVar2 = refVar;
    cout<<sizeof(refVar)<<endl; //output - 8
    
    return 0;
}