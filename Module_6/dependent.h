
#include "person.h"


#ifndef DEPENDENT_H_
#define DEPENDENT_H_
class Dependent : public Person{
    public:
            // Constructor:
        Dependent(
            string name,    string birth_date, 
            string gender,  string ssn,
            string address, string home_phone);
};
#endif