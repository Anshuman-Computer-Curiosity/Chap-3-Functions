#include <iostream>
#include <vector>
using namespace std;
// template<typename T, typename U>
// auto multiply(T a, U b) {
//     return a * b;
// }

int main() {
    // int x = 5;
    // double y = 2.5;
    // auto result = multiply(x, y); // Deduced type: double
    // cout << "Result: " << result << endl;

    vector<int> numbers = {1, 2, 3, 4, 5};
    // Using auto with iterators
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout<< *it <<" ";
    }

    // cout<<endl;


    return 0;
}