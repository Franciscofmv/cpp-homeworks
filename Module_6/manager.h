#include "employee.h"

#ifndef MANAGER_H_
#define MANAGER_H_

class Manager : public Employee{

    protected:
        string title;
    public:
        // Constructor:
        Manager(
            string job_title, string date, string sal, string loc, 
            string work_phone, string name, string birth_date, 
            string gender, string ssn, string address, string home_phone);
            // Get title:
        string get_title();
            // Change protected vars:
        void change_title(string x);
        
};

#endif