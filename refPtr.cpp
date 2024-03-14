//pointer vs reference variable - points 1 to 5
#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 20;
    int *ptr ; //pointer variable ptr declared
    ptr = &a;
    int& refVar = a;

    cout<<"a = "<<a<<endl;
    cout<<"Using pointer, a = "<<*ptr<<"Address = "<<ptr<<endl;
    cout<<"Using reference, a= "<<refVar<<"Address = "<<&refVar<<endl;
    ptr = &b;
       cout<<"Using pointer, b = "<<*ptr<<"Address = "<<ptr<<endl;
    //  refVar = b;
    // cout<<"Using reference, a= "<<refVar<<"Address = "<<&refVar<<endl;
    return 0;
}