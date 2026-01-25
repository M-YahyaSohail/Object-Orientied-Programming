#include <iostream>
#include<cmath>
using namespace std;
int main(void) {
  int num;
  bool isPrime = true;
  cout << "Enter a postive whole number: ";
  cin >> num;
  cout << endl;
  if (num == 1) {
      cout << "The given number is not a prime number:";
    } else if (num == 2 || num == 3 || num == 5 || num == 7) {
      cout << "The given number is a prime number:";
    }
    else {
      for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
          isPrime = false;
          break;
        } 
      }
      if (isPrime == true) {
        cout << "The given number is a prime number:";
      }
       if (isPrime == false) {
        cout << "The given number is not a prime number:";
      }
    }
    return 0;
  }
