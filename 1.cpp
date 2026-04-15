#include <iostream>
using namespace std;

// Global variable (global/static memory region)
int globalVar = 10;

int main() {
    // Local variable (stack memory)
    int localVar = 20;

    // Dynamically allocated variable (heap memory)
    int *heapVar = new int(30);

    cout << "Address of global variable (global/static memory): "
         << &globalVar << endl;

    cout << "Address of local variable (stack memory): "
         << &localVar << endl;

    cout << "Address of dynamically allocated variable (heap memory): "
         << heapVar << endl;

    // Free dynamically allocated memory
    delete heapVar;

    return 0;
}
