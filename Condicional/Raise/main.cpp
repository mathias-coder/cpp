#include <iostream>      
#include <iomanip>

using namespace std;

int main(){
    double salary, new_salary, percent;

    cout << "Type the actual salary: ";
    cin >> salary;

    cout << fixed << setprecision(2);

    if(salary < 1000.00){
        new_salary = salary + salary * 0.2;
        percent = 20;
    }
    else if(salary < 3000){
        new_salary = salary + salary * 0.15;
        percent = 15;
    }
    else if(salary <= 8000){
        new_salary = salary + salary * 0.10;
        percent = 10;
    }
    else{
        new_salary = salary + salary * 0.05;
        percent = 5;
    }

    cout << "New salary = R$" << new_salary << endl;
    cout << "Raise = R$" << new_salary - salary << endl;
    cout << "Percent = " << fixed << setprecision(0) << percent << "%" << endl;

    return 0;
}