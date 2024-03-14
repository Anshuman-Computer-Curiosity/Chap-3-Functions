//using mutable
#include<iostream>
using namespace std;
class Restaurant{
    private : 
         mutable double billAmt;//mutable variable
        mutable int tableNo;
    public:
    Restaurant(int x,double y) {tableNo = x; billAmt = y; }
      
    void modify(int x, double y) const {
        tableNo = x;
        billAmt = y;
        cout<<"Table = "<<tableNo<<" bill = "<<billAmt<<endl;
    }
};
int main(){
   const Restaurant temp(1,0.0);// constant object of class
   temp.modify(3,750.0);
}