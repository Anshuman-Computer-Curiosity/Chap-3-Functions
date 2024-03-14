#include <iostream>
using namespace std;

class Outer {
    public:
        void outerFunction(int x);
    private:
        friend void nestedFunction(int y);//friend func.
};

void nestedFunction(int y) {//friend func.
    cout << "Nested function, argument y = " << y << endl;
}
void Outer::outerFunction(int x) {
    cout << "Outer function, argument x = " << x << endl;
    nestedFunction(30);//call to nested function
}
int main() {
    Outer obj;
    obj.outerFunction(10);
    return 0;
}