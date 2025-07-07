#include <iostream>
#include "person.h"
#include "employee.h"
#include "create_objects.h"
#include "input_handler.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;


Employee create_employee();

int main(){
        // Define pointers used in the program:
    Person *person;
    Employee *emp;

    int input = 9;
    while (true){
        cout << "\nPlease, select an option to create an object:\n" << endl;
        cout << "0.  Exit program."         << endl;
        cout << "1.  Create a Person."      << endl;
        cout << "2.  Create an Employee."   << endl;
        cout << "3.  Create a Dependent."   << endl;
        cout << "4.  Create a Manager."     << endl;
        cout << "5.  Create a Worker."      << endl;

        cout << "\nPlease, select an option to print information about an object:\n" << endl;
        cout << "0.  Exit program."                              << endl;
        cout << "6.  Print/change information about object: Person."    << endl;
        cout << "7.  Print/change information about object: Employee."  << endl;
        cout << "8.  Print/change information about object: Dependent." << endl;
        cout << "9.  Print/change information about object: Manager."   << endl;
        cout << "10. Print/change information about object: Worker."    << endl;
        
        cin >> input;

        if (input == 0){
            cout << "*** Exiting Program ***";
            break;
        }
        else if(input == 1){
            Person p = create_person();
            person = &p;
        }
        else if (input == 2){
            Employee e = create_employee();
            emp = &e;
        }
        else if (input == 3){
            
        }
        else if (input == 4){
            
        }
        else if (input == 5){
            
        }
        else
            input_handler(input, person, emp);
    }
    return 0;
}

