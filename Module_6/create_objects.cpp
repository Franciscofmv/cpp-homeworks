#include <iostream>

#include "create_objects.h"
#include "person.h"
#include "employee.h"
#include "dependent.h"
#include "manager.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

    // Function handler to create a Person object:
Person create_person(){
    string name;
    string birth_date;
    string gender;
    string ssn;
    string address;
    string home_phone;
        // Clear buffer:
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Enter name of person: " << endl;
    getline(cin, name);

    cout << "Enter date of birth in form MM/DD/YYYY: " << endl;
    getline(cin, birth_date);

    cout << "Enter gender (M, F, Non-binary, ...): " << endl;
    getline(cin, gender);

    cout << "Enter Social Security number (xxx-xx-xxxx): " << endl;
    getline(cin, ssn);

    cout << "Enter Address: " << endl;
    getline(cin, address);

    cout << "Enter Home Phone number: " << endl;
    getline(cin, home_phone);
    Person p(name, birth_date, gender, ssn, address, home_phone);

    return p;
}

    // Function handler to create an Employee object:
Employee create_employee(){
    string name;
    string birth_date;
    string gender;
    string ssn;
    string address;
    string home_phone;
    string hire_date;
    string salary;
    string location;
    string work_phone_number;

    // Clear buffer:
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Enter name of employee: " << endl;
    getline(cin, name);

    cout << "Enter date of birth in form MM/DD/YYYY: " << endl;
    getline(cin, birth_date);

    cout << "Enter gender (M, F, Non-binary, ...): " << endl;
    getline(cin, gender);

    cout << "Enter Social Security number (xxx-xx-xxxx): " << endl;
    getline(cin, ssn);

    cout << "Enter Address: " << endl;
    getline(cin, address);

    cout << "Enter Home Phone number: " << endl;
    getline(cin, home_phone);

    cout << "Enter hire date MM/DD/YYYY: " << endl;
    cin >> hire_date;

    cout << "Enter salary (just the numbers):" << endl;
    cin >> salary;

    cout << "Enter work location: " << endl;
    cin >>location;

    cout << "Enter work phone number in the format xxx-xxx-xxxx: " << endl;
    cin >> work_phone_number;
    Employee e(
        hire_date,  salary,  location,  work_phone_number, name,  birth_date,
        gender,  ssn,  address,  home_phone);
    
    return e;
}
    // Create Dependent:
Dependent create_dependent(){
    string name;
    string birth_date;
    string gender;
    string ssn;
    string address;
    string home_phone;
        // Clear buffer:
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Enter name of dependent: " << endl;
    getline(cin, name);

    cout << "Enter date of birth in form MM/DD/YYYY: " << endl;
    getline(cin, birth_date);

    cout << "Enter gender of dependent(M, F, Non-binary, ...): " << endl;
    getline(cin, gender);

    cout << "Enter Social Security number of Employee (xxx-xx-xxxx): " << endl;
    getline(cin, ssn);

    cout << "Enter Address: " << endl;
    getline(cin, address);

    cout << "Enter Home Phone number: " << endl;
    getline(cin, home_phone);
    Dependent d(name, birth_date, gender, ssn, address, home_phone);

    return d;
}
    // Create a Manager:
Manager create_manager(){
    string title;
    string name;
    string birth_date;
    string gender;
    string ssn;
    string address;
    string home_phone;
    string hire_date;
    string salary;
    string location;
    string work_phone_number;

    // Clear buffer:
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Enter title of Manager: " << endl;
    getline(cin, title);

    cout << "Enter name of Manager: " << endl;
    getline(cin, name);

    cout << "Enter date of birth in form MM/DD/YYYY: " << endl;
    getline(cin, birth_date);

    cout << "Enter gender (M, F, Non-binary, ...): " << endl;
    getline(cin, gender);

    cout << "Enter Social Security number (xxx-xx-xxxx): " << endl;
    getline(cin, ssn);

    cout << "Enter Address: " << endl;
    getline(cin, address);

    cout << "Enter Home Phone number: " << endl;
    getline(cin, home_phone);

    cout << "Enter hire date MM/DD/YYYY: " << endl;
    cin >> hire_date;

    cout << "Enter salary (just the numbers):" << endl;
    cin >> salary;

    cout << "Enter work location: " << endl;
    cin >>location;

    cout << "Enter work phone number in the format xxx-xxx-xxxx: " << endl;
    cin >> work_phone_number;
    Manager m(
        title,hire_date,  salary,  location,  work_phone_number, name,  birth_date,
        gender,  ssn,  address,  home_phone);
    
    return m;
}
   // Create a Worker:
Worker create_worker(){
    string proj;
    string name;
    string birth_date;
    string gender;
    string ssn;
    string address;
    string home_phone;
    string hire_date;
    string salary;
    string location;
    string work_phone_number;

    // Clear buffer:
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Enter project: " << endl;
    getline(cin, proj);

    cout << "Enter name of Worker: " << endl;
    getline(cin, name);

    cout << "Enter date of birth in form MM/DD/YYYY: " << endl;
    getline(cin, birth_date);

    cout << "Enter gender (M, F, Non-binary, ...): " << endl;
    getline(cin, gender);

    cout << "Enter Social Security number (xxx-xx-xxxx): " << endl;
    getline(cin, ssn);

    cout << "Enter Address: " << endl;
    getline(cin, address);

    cout << "Enter Home Phone number: " << endl;
    getline(cin, home_phone);

    cout << "Enter hire date MM/DD/YYYY: " << endl;
    cin >> hire_date;

    cout << "Enter salary (just the numbers):" << endl;
    cin >> salary;

    cout << "Enter work location: " << endl;
    cin >>location;

    cout << "Enter work phone number in the format xxx-xxx-xxxx: " << endl;
    cin >> work_phone_number;
    Worker m(proj, hire_date,  salary,  location,  work_phone_number, name,  birth_date,
        gender,  ssn,  address,  home_phone);
    
    return m;
}