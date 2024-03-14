//capture by move
#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Capture numbers vector by move
    auto lambda = [num = move(numbers)]() {
        for(int elem : num) {
            cout<<elem << " ";
        }
        cout<<endl;
        
    };
     cout << "Size of numbers: " << numbers.size() <<endl;
    // CE:Attempt to use numbers after move
    lambda(); 
    return 0;
}