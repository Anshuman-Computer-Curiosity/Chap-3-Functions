#include<iostream>

#define CUBE(a) (a)*(a)*(a)

using namespace std;
int main(){
	int x =3,y;

	y = CUBE(++x); 	

    cout<<"Cube = "<<y<<endl;
    return 0;
}
