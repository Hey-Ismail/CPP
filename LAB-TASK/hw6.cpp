#include <iostream>
using namespace std;

// Function to check if a year is a leap year or not
bool isLeapYear(int year) {
    if (year % 400 == 0) {
        return true;
    }
    else if (year % 100 == 0) {
        return false;
    }
    else if (year % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

// Function to check leap years in an array of years
void checkLeapYears(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (isLeapYear(arr[i])) {
            cout << arr[i] << " is a leap year." << endl;
        }
        else {
            cout << arr[i] << " is not a leap year." << endl;
        }
    }
}

int main() {
    int arr[] = { 1997, 2000, 2004, 2008, 2012, 2013, 2020 };
    int size = sizeof(arr) / sizeof(arr[0]);

    checkLeapYears(arr, size);

    return 0;
}

