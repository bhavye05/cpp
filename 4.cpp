#include <iostream>
using namespace std;

int main() {
    int a = 25;        // Original variable
    int* p = &a;       // Pointer storing address of 'a'
    int b;             // Third variable

    // Copy value of 'a' into 'b' using dereferencing
    b = *p;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value stored in pointer p: " << p << endl;
    cout << "Value of b (copied using dereferencing): " << b << endl;

    return 0;
}
