#include<iostream>
using namespace std;
auto findMax(int x,int y) {
    
    return (x>y)?x:y;
}
int main(){
    cout<<findMax(3,5);

    return 0;
}