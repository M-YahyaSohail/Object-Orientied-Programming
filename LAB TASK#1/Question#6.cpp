#include <iostream>

using namespace std;

void printPattern(int start, int end) {
    int evenCounter = 0;

    if (start % 2 != 0) start++; 

    for (int i = start; i <= end; i += 2) {
        cout << i << " (Even)" << endl;
        evenCounter++;
        if (evenCounter == 5) {
            int nextOdd = i + 1;
            if (nextOdd <= end) {
                cout << nextOdd << " (Odd - Triggered)" << endl;
            }
            evenCounter = 0; 
        }
    }
}

int main() {
    int start, end;
    cout << "Enter range (start end): ";
    if (!(cin >> start >> end)) return 1;

    printPattern(start, end);
    return 0;
}
