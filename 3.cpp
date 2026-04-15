#include <iostream>
using namespace std;

int main() {
    int x = 10;      // Normal variable
    int *p = &x;     // Pointer storing address of x

    cout << "Value of variable x: " << x << endl;
    cout << "Address of variable x: " << &x << endl;
    cout << "Value stored in pointer p: " << p << endl;

    return 0;
}
