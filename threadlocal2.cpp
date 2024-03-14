
#include <iostream>
#include <thread>
using namespace std;
static thread_local int counter = 0;

void increment_counter() {
    for (int i = 0; i < 5; i++) {
        cout <<this_thread::get_id() << ":Counter: " << ++counter << endl;
    }
}
    

int main() {
    thread t1(increment_counter);
    thread t2(increment_counter);
    cout << "Waiting for child threads to finish..." << endl;
    t1.join();
    t2.join();
    cout << "Child threads have finished." << endl;
    return 0;
}