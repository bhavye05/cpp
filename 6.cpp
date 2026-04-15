#include <iostream>
using namespace std;

int main() {
    // 1. Create a dynamic integer using new
    int* ptr = new int;

    // 2. Modify the value through the pointer
    *ptr = 42;

    cout << "Value stored dynamically: " << *ptr << endl;

    // 3. Properly delete the allocated memory
    delete ptr;

    return 0;
}
