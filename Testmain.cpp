#include <iostream>

void my_function() {
    std::cout << "Hello from my_function!" << std::endl;
}

int main() {
    // Get the address of the main function
    int (*main_ptr)() = &main;

    // Call the main function using the function pointer
    (*main_ptr)();

    // Call a different function using a function pointer
    void (*func_ptr)() = &my_function;
    (*func_ptr)();

    return 0;
}