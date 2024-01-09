#include <iostream>
using namespace std;

void displayGrade(int marks) {
    if (marks >= 91 && marks <= 100) {
        cout << "Grade: AA" << endl;
    } else if (marks >= 81 && marks <= 90) {
        cout << "Grade: AB" << endl;
    } else if (marks >= 71 && marks <= 80) {
        cout << "Grade: BB" << endl;
    } else if (marks >= 61 && marks <= 70) {
        cout << "Grade: BC" << endl;
    } else if (marks >= 51 && marks <= 60) {
        cout << "Grade: CD" << endl;
    } else if (marks >= 41 && marks <= 50) {
        cout << "Grade: DD" << endl;
    } else {
        cout << "Grade: Fail" << endl;
    }
}

int main() {
    int marks;

    // Prompt user to enter marks
    cout << "Enter your marks (out of 100): ";
    cin >> marks;

    // Display grade
    displayGrade(marks);

}

