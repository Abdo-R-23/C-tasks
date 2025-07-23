#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    // 1. Read the first number from the user
    cout << "Enter first number: ";
    cin >> num1;

    // 2. Read the operator (+, -, *, /)
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    // 3. Read the second number from the user
    cout << "Enter second number: ";
    cin >> num2;

    // 4. Perform the calculation based on the operator
    double result;

    if (op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '*') {
        result = num1 * num2;
    }
    else if (op == '/') {
        if (num2 != 0)
            result = num1 / num2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 1;  // Exit the program with error
        }
    }
    else {
        cout << "Invalid operation!" << endl;
        return 1;  // Exit the program with error
    }

    // 5. Display the result
    cout << "Result: " << result << endl;

    return 0;
}
