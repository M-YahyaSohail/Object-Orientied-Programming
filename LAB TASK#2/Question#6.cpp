#include <iostream>

using namespace std;

int main() {
    int capacity = 5;
    int size = 0;
    int* arr = new int[capacity];
    int input;

    while (cin >> input && input != -1) {
        if (size == capacity) {
            capacity *= 2;
            int* temp = new int[capacity];
            for (int i = 0; i < size; i++) temp[i] = arr[i];
            delete[] arr;
            arr = temp;
        }
        arr[size++] = input;
    }

    int* dietArr = new int[size];
    for (int i = 0; i < size; i++) dietArr[i] = arr[i];
    delete[] arr;
    arr = dietArr;

    for (int i = 0; i < size; i++) cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
