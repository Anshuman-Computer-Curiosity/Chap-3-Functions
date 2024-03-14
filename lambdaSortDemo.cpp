#include<iostream>
#include<algorithm> //for sort()
#include<vector>
#include<string>
using namespace std;
int main() {
    //collection of names - container
    vector<string> names = {"Kapil", "Varun", "Arindam", "Shefali"};

    // Sort the vector of strings using a lambda expression
    sort(names.begin(), names.end(), [](const string& a, const string& b) {
        return a < b;
    });
    cout<<"Sorted names: "<<endl;
    for(const auto& name : names) { //for each loop
        cout<<name<<endl;
    }
    return 0;
}