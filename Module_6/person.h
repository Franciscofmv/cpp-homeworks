#include <string>

using std::string;
#ifndef PERSON_H_
#define PERSON_H_

class Person{
    protected:
        string name;
        string date_of_birth;
        string gender;
        string ssn;
        string address;
        string home_phone_number;
        
    public:
            // Initializers:
        Person();
        Person(string name, string birth_date, string gender, string ssn, 
            string address, string home_phone);

            // Get attributes values:
        string get_name();
        string get_dob();
        string get_gender();
        string get_address();
        string get_phone();
        string get_ssn();

            // Change attributes:
        void change_name(string& x);    
        void change_gender(string& x);
        void change_address(string& x);
        void change_phone(string& x);
};
#endif