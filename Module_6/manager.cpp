#include <iostream>

#include "manager.h"

Manager::Manager(
    string job_title, string date, string sal, string loc, 
    string work_phone, string name, string birth_date, 
    string gender, string ssn, string address, string home_phone) :
    Employee(date, sal, loc, work_phone, name, birth_date, gender, ssn, 
    address, home_phone){
        title = job_title;
    }

string Manager::get_title(){
    return title;
}
void Manager::change_title(string x){
    title = x;
}