#include <iostream>
#include <thread>
using namespace std;
class MyClass {
public:
    static thread_local int counter;

    static void increment_counter() {
        ++counter;
        cout << "Thread " << this_thread::get_id() << ": counter = " << counter <<endl;
    }
};
thread_local int MyClass::counter = 0;
int main() {
    thread t1(MyClass::increment_counter);
    thread t2(MyClass::increment_counter);

    t1.join();
    t2.join();

    return 0;
}