#include <iostream>
using namespace std;

// Function to swap two numbers using pointers
void swap(int* a, int* b) {
    int temp = *a;   // store value pointed by a
    *a = *b;         // assign value pointed by b to a
    *b = temp;       // assign temp to value pointed by b
}

int main() {
    int x = 10, y = 20;

    cout << "Before swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    // Call swap function by passing addresses
    swap(&x, &y);

    cout << "After swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
