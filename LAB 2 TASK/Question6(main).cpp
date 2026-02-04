#include "Employee.h"
#include "iostream"
using namespace std;
int main(){
    Employee e1;
    e1.get_data("Yahya",12000,2.0);
    e1.salary_after_tax();
    e1.update_tax_percentage();
    return 0;
}
