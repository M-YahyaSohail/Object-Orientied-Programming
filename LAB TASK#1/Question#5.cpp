#include <iostream>
using namespace std;
int calculateFactorial(int n) {
    if (n < 0) return 0; 
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Invalid input. Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " is: " << calculateFactorial(num) << endl;
    }

    return 0;
}
