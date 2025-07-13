#include "person.h"
#include "employee.h"
#include "manager.h"
#include "dependent.h"
#include "worker.h"

#ifndef CREATE_OBJECTS_H_
#define CREATE_OBJECTS_H_
Person create_person();
Employee create_employee();
Dependent create_dependent();
Manager create_manager();
Worker create_worker();

#endif