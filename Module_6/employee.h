#include <iostream>
#include "person.h"

using std::string;

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee : public Person
{
    protected:
        string hire_date;
        double salary;
        string location;
        string work_phone_number;

    public:
            // Constructor
        Employee(
            string date, double sal, string loc, string work_phone, 
            string name, string birth_date, string gender, string ssn, 
            string address, string home_phone);
            
            // Member functions to get protected attributes:
        string get_hire_date();
        double get_salary();
        string get_location();
        string get_work_phone();
            // Change values of protected data members:
        void change_salary(double& x);
        void change_work_location(string& x);
        void change_work_phone(string& x);
    
};

#endif 