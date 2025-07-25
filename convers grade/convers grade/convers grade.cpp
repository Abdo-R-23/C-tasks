#include <iostream>
using namespace std;

int main() {
    char grade;

    // Ask user for input
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;

    // Optional: convert to uppercase to avoid case mismatch
    grade = toupper(grade);

    // Use switch-case to print the grade meaning
    switch (grade) {
    case 'A':
        cout << "Excellent ??" << endl;
        break;
    case 'B':
        cout << "Very Good ??" << endl;
        break;
    case 'C':
        cout << "Good ??" << endl;
        break;
    case 'D':
        cout << "Needs Improvement ??" << endl;
        break;
    case 'F':
        cout << "Fail ?" << endl;
        break;
    default:
        cout << "Invalid grade entered!" << endl;
        break;
    }

    return 0;
}
