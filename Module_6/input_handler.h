#include <iostream>
#include "person.h"
#include "employee.h"
#include "dependent.h"
#include "manager.h"
#include "worker.h"

#ifndef INPUT_HANDLER_H_
#define INPUT_HANDLER_H_
void input_handler(
    int& input, Person* pp, Employee* ee, Dependent* dd, Manager* mm, Worker* ww);
#endif
