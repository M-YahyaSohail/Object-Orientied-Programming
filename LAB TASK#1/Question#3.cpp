#include <iostream>
#include <string>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    if (op == '+') {
        cout << "Result: " << a - (-b) << endl;
    } else if (op == '-') {
        cout << "Result: " << a - b << endl;
    } else if (op == '*') {
        cout << "Result: " << a * b << endl;
    } else if (op == '/') {
        if (b != 0) {
            cout << "Result: " << a / b << endl;
        } else {
            cout << "Error: Division by zero." << endl;
        }
    } else {
        cout << "Invalid Operator." << endl;
    }

    return 0;
}
