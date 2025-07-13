#include <iostream>
#include "person.h"
#include "employee.h"
#include "dependent.h"
#include "manager.h"
#include "worker.h"

#include "create_objects.h"
#include "input_handler.h"

using std::cout;
using std::endl;
using std::cin;

int main(){
    unsigned int person_exists = 0;
    unsigned int employee_exists = 0;
    unsigned int dependent_exists = 0;
    unsigned int manager_exists = 0;
    unsigned int worker_exists = 0;
        // Define pointers used in the program:
    Person *person;
    Employee *emp;
    Dependent *dep;
    Manager *mm;
    Worker *ww;

    int input = 9;
    while (true){
        cout << "\nSelect an option to create an object: (Press 0 to Exit)" << endl;
        cout << "1. Person."      << endl;
        cout << "2. Employee."   << endl;
        cout << "3. Dependent."   << endl;
        cout << "4. Manager."     << endl;
        cout << "5. Worker."      << endl;

        cout << "\nSelect an option to print/change information about object: (Press 0 to Exit)" << endl;                         
        cout << "6.  Person."    << endl;
        cout << "7.  Employee."  << endl;
        cout << "8.  Dependent." << endl;
        cout << "9.  Manager."   << endl;
        cout << "10. Worker."    << endl;
        
        cin >> input;

        if (input == 0){
            cout << "*** Exiting Program ***";
            break;
        }
        else if(input == 1){
            Person p = create_person();
            person = &p;
            person_exists = 1;
        }
        else if (input == 2){
            Employee e = create_employee();
            emp = &e;
            employee_exists = 1;
        }
        else if (input == 3){
            Dependent dd = create_dependent();
            dep = &dd;
            dependent_exists = 1;
        }
        else if (input == 4){
            Manager man = create_manager();
            mm = &man;
            manager_exists = 1;    
        }
        else if (input == 5){
            Worker wor = create_worker();
            ww = &wor;
            worker_exists = 1;
        }
        else if (input == 6){
            if (person_exists)
                input_handler(input, person, emp, dep, mm, ww);
            else
                cout<< "\n*** Create a Person First ***\n";
        }
        else if (input == 7){
            if (employee_exists)
                input_handler(input, person, emp, dep, mm, ww);
            else
                cout << "\n*** Create an Employee First ***\n";
        }
        else if (input == 8){
            if (dependent_exists)
                input_handler(input, person, emp, dep, mm, ww);
            else
                cout << "\n*** Create a Dependent First ***\n";
        }
        else if (input == 9){
            if (manager_exists)
                input_handler(input, person, emp, dep, mm, ww);
            else
                cout << "\n*** Create a Manager First ***\n";
        }
        else if (input == 10){
            if (worker_exists)
                input_handler(input, person, emp, dep, mm, ww);
            else
                cout << "\n*** Create a Worker First ***\n";
            
        }
    }
    return 0;
}

