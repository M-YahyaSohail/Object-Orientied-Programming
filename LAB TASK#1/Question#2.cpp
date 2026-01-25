#include <iostream>
using namespace std;
int pf, oop, dld, ict;
int total_marks(int pf, int oop, int dld, int ict) {
  int total = pf + oop + dld + ict;
  cout << "Total marks are: " << total << endl;
  return total;
}
float average_marks(int total) {
  float average = total / 4.0;
  return average;
}
void assign_grade(float avg){
  if(avg>=90){
    cout<<"The Grade is A";
  }
  if(avg>=80){
    cout<<"The Grade is B";
  }
  if(avg>=70){
    cout<<"The Grade is C";
  }
  if(avg>=60){
    cout<<"The Grade is D";
  }
  if(avg<60){
    cout<<"The Grade is F";
  }
}
int main(void) {
  cout << "Enter marks for pf, oop, dld, and ict: ";
  cin >> pf >> oop >> dld >> ict;
  int total = total_marks(pf, oop, dld, ict);
  float avg = average_marks(total);
  cout << "Average marks are: " << avg << endl;
  assign_grade(avg);
  return 0;
}
