#include <iostream>
using namespace std;


void callValue(int x) {
    x = x + 10;
    cout << "CallByValue : x = " << x << endl;
}

// Function to demonstrate call by reference
void callReference(int &x) {
    x = x + 10;
    cout << "CallByReference: x = " << x << endl;
}

int main() {
    int x = 5;

    // Call callByValue function
    callValue(x);
    cout << "After callByValue function: x = " << x << endl;

    // Call callByReference function
    callReference(x);
    cout << "After callByReference function: x = " << x << endl;

    return 0;
}

