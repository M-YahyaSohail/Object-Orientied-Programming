#include "Employee.h"
#include "iostream"
using namespace std;
void get_data(string name, int monthly_salary, float tax_percentage){
        this->name=name;
        this->monthly_salary=monthly_salary;
        this->tax_percentage=tax_percentage;
    }
    void salary_after_tax(){
        cout<<"The salary after tax is: "<<monthly_salary*(1-((tax_percentage)/100));
        cout<<endl;
    }
    void update_tax_percentage(){
        cout<<"Hold On! The tax percentage is 3, not 2! \nLet me recalculate"<<endl;
        tax_percentage=3;
        salary_after_tax();
    }
