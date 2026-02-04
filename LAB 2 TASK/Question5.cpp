#include"iostream"
using namespace std;
class Employee{
    string name;
    int monthly_salary;
    float tax_percentage;
    public:
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
};
int main(){
    Employee e1;
    e1.get_data("Yahya",12000,2.0);
    e1.salary_after_tax();
    e1.update_tax_percentage();
    return 0;
}
