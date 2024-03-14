#include<iostream>
using namespace std;
inline int max(int x,int y=10);
int main() {
   int m=25, n=25;
   int a,b;

   a = max(6); // replaced with 6>8:6:8 on compilation;
   cout<<"Greatest of 6 and 8 = "<<a<<endl;
   
   b = max(m); // replaced with m>n:m:n on compilation;
   cout<<"Greatest of m = "<<m<<" and n = "<<n<<" is "<<b<<endl;
   
   return 0;
}
inline int max(int x,int y){
	return(x>y?x:y);
}