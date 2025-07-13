#include "worker.h"

Worker::Worker(
    string proj, string date, string sal, string loc, string work_phone, 
    string name, string birth_date, string gender, string ssn, 
    string address, string home_phone) :
    Employee(date, sal, loc, work_phone, name, birth_date, gender, ssn, 
    address, home_phone){
        project = proj;
}

string Worker::get_project(){
    return project;
}

void Worker::change_project(string p){
    project = p;
}