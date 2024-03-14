  // Using for each loop to access vector elements 
	#include <iostream>
	#include <vector>
	using namespace std;
	int main()
	{
    	vector<int> v1{10,20,30,40,50};//dynamic array
        for(int &i : v1) 
		    i = i + 10;  
        for(int i : v1) 	
		    cout << i << " "; 
        cout<<endl;
        return 0;
     }
