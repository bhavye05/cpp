#include <iostream>
using namespace std;

// Function definition
int square(int x) {
    return x * x;
}

int main() {
    int num = 5;

    // Normal function call
    int result1 = square(num);
    cout << "Normal call result: " << result1 << endl;

    // Function pointer
    int (*funcPtr)(int);
    funcPtr = square;

    // Function call via pointer
    int result2 = funcPtr(num);
    cout << "Function pointer call result: " << result2 << endl;

    return 0;
}
