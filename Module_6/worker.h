#include <iostream>
#include "employee.h"

using std::string;
#ifndef WORKER_H_
#define WORKER_H_
class Worker : public Employee {
    protected:
        string project;
    public:
            // Constructor:
        Worker(
            string proj, string date, string sal, string loc, string work_phone, 
            string name, string birth_date, string gender, string ssn, 
            string address, string home_phone);
        
            // Get protected variables:
        string get_project();
            // Change protected vars:
        void change_project(string p);

};
#endif