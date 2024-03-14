#include<iostream>
using namespace std;

inline int cube(int x);

int main(){
	int x =3,y;

	y = cube(++x); 

    cout<<"Cube = "<<y<<endl;
    return 0;
}

inline int cube(int x){
    return x*x*x;
}