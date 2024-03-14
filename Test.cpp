class MyClass {
public:
    int value;

    MyClass(int x) : value(x) {
        // Constructor body
    }

    MyClass(int x) const {
        // Const constructor body
    }
};

int main() {
    const MyClass obj(5);  // Creating a const object using the const constructor

    obj.value = 10;  // Error: Attempting to modify a const object

    return 0;
}