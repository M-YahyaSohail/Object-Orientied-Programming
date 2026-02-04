#pragma once
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int monthly_salary;
    float tax_percentage;

public:
    void get_data(string name, int monthly_salary, float tax_percentage);
    void salary_after_tax();
    void update_tax_percentage();
};
