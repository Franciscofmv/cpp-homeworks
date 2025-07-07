#include <iostream>
#include "person.h"

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::getline;

    // Initialize Person
Person::Person(string name, string birth_date, 
    string gender, string ssn,
    string address, string home_phone)
{
    this->name = name;
    this->date_of_birth = birth_date;
    this->gender = gender;
    this->ssn = ssn;
    this->address = address;
    this->home_phone_number = home_phone;
}

    // Get name of person:
string Person::get_name(){
    return name;
}
    // Get date of birth of person:
string Person::get_dob(){
    return date_of_birth;
}
    // Get gender of person:
string Person::get_gender(){
    return gender;
}
    // Get address of person:
string Person::get_address(){
    return address;
}
    // Get phone of person:
string Person::get_phone(){
    return home_phone_number;
}
    // Get social security number:
string Person::get_ssn(){
    return ssn;
}
void Person::change_name(string& x){
    name = x;
}
void Person::change_gender(string& x){
    gender = x;
}
void Person::change_address(string& x){
    address = x;
}
void Person::change_phone(string& x){
    home_phone_number = x;
}