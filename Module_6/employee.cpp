#include <iostream>
#include "employee.h"


using std::cout;
using std::endl;
using std::getline;
using std::cin;
using std::string;

    // Constructor:
Employee::Employee(
    string date, double sal, string loc, string work_phone, 
    string name, string birth_date, string gender, string ssn, string address, string home_phone) 
    : Person(name, birth_date, gender, ssn, address, home_phone){
  hire_date = date;
  salary = sal;
  location = loc;
  work_phone_number = work_phone;
}
    // Get date of hiring of employee:
string Employee::get_hire_date(){
    return hire_date;
}
    // Get salary of employee:
double Employee::get_salary(){
    return salary;
}
    // Get location of Employee:
string Employee::get_location(){
    return location;
}
    // Get work phone of employee:
string Employee::get_work_phone(){
    return work_phone_number;
}
    // Change the salary of the employee:
void Employee::change_salary(double& x){
    salary = x;
}
    // Change work location of employee:
void Employee::change_work_location(string& x){
    location = x;
}
    // Change work phone of employee:
void Employee::change_work_phone(string& x){
    work_phone_number = x;
}