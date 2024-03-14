//class with overloaded main() member functions
#include<iostream>
using namespace std;
class MyClass{
			public:
				int main(int a) { return a;}
				int main(int a,int b) { return (a>b)? a : b;} //overloaded		
};
int main(){
	MyClass obj;
	cout<<obj.main(10)<<endl;
	cout<<obj.main(5,15)<<endl;
	return 0;
}