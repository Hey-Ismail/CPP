#include<iostream>
using namespace std;

// Function to find maximum number
int Maximum(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find minimum number
int Minimum(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Function to determine if number is even or odd
void EvenOrOdd(int num) {
    if (num % 2 == 0) {
        cout << "even"<<endl;
    } else {
        cout << "odd"<<endl;
    }
}

int main() {
    int arr[4];

    // Input 4 positive numbers from user
    cout << "Enter four positive number: ";
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];

    }

    int max = Maximum(arr, 4);
    int min = Minimum(arr, 4);

    // Print maximum and minimum numbers
    cout << "Maximum number: " << max << endl;
    cout << "Minimum number: " << min << endl;

    // Determine if maximum and minimum numbers are even or odd
    cout << "Maximum number is ";
    EvenOrOdd(max);
    cout << "Minimum number is ";
    EvenOrOdd(min);


}

