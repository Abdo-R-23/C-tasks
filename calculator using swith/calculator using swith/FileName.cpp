#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    // 1. Read first number
    cout << "Enter first number: ";
    cin >> num1;

    // 2. Read the operator
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    // 3. Read second number
    cout << "Enter second number: ";
    cin >> num2;

    double result;

    // 4. Perform operation using switch
    switch (op) {
    case '+':
        result = num1 + num2;
        cout << "Result: " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "Result: " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "Result: " << result << endl;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        }
        else {
            cout << "Error: Division by zero!" << endl;
        }
        break;
    default:
        cout << "Invalid operation!" << endl;
    }

    return 0;
}
