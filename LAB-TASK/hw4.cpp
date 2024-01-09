#include <iostream>
using namespace std;

// Function to calculate factorial
void factorial(int n) {
    if (n < 0) {
        cout << "Error: Number must be non-negative." << endl;
        return;
    }

    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial of " << n << " = " << fact << endl;
}

int main() {
    int n;

    // Prompt user to enter a number
    cout << "Enter a non-negative integer: ";
    cin >> n;

    // Compute and print factorial
    factorial(n);

    return 0;
}

