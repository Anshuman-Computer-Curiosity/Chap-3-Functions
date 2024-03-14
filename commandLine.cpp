#include<iostream>
using namespace std;
int main(int argc, char *argv[]){
   int i;
   cout<<"Value received by argc = "<<argc<<endl;
   cout<<"First command line argument = "<<argv[0]<<endl;
   cout<<"Other command line arguments"<<endl;
   for(i=1;i<argc;i++)
        cout<<argv[i]<<endl;
   return 0;
}
