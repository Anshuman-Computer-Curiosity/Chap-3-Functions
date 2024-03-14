#include<iostream>
using namespace std;
int main(){
    const int& x =10; 
	//	x = 50; //Error: No modification
    cout<<x<<endl;
    return 0;
}
