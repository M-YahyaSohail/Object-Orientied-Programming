#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size]; 
    int evenCount = 0;
    int oddCount = 0;

    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        
        // Bitwise Optimization: (arr[i] & 1) is faster than arr[i] % 2
        if ((arr[i] & 1) == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}
