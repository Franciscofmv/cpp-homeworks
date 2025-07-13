#include "input_handler.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

void person_menu(int& input, Person* pp);
void employee_menu(int& input, Employee* ee);
void dependent_menu(int& input, Dependent* dd);
void manager_menu(int& input, Manager* dd);
void worker_menu(int& input, Worker* ww);

    // Function to handle all menus:
void input_handler(
    int& input, Person* pp, Employee* ee, Dependent* dd, Manager* mm, Worker* ww){
    if (input == 6){
        person_menu(input, pp);
    } 
    else if (input == 7){
        employee_menu(input, ee);
    }
    else if(input == 8){
        dependent_menu(input, dd);

    }
    else if (input == 9){
        manager_menu(input, mm);
    }
    else if (input == 10){
        worker_menu(input, ww);
    }

}
    // Menu for Person object:
void person_menu(int& input, Person* pp){
    while(true){
        cout << "\n *** Person object Menu ***\n" << endl;
        cout << "0. Exit Menu."                 << endl;
        cout << "1. Print name."                << endl;
        cout << "2. Print SSN."                 << endl;
        cout << "3. Print date of birth."       << endl;
        cout << "4. Print gender."              << endl;
        cout << "5. Print address."             << endl;
        cout << "6. Print home phone number."   << endl;
        cout << "7. Change name"                   << endl;
        cout << "8. Change gender"                 << endl;
        cout << "9. Change address"                << endl;
        cout << "10. Change home phone."            << endl;
        cin >> input;
        if (input == 0){
            cout << "\n*** Exiting Person Menu ***\n" << endl;
            break;
        }
        else if (input == 1){
            cout << "\n***\n";
            cout << "The name is: ";
            cout << pp->get_name() << endl;
            cout << "\n***\n";

        }
        else if (input == 2){
            cout << "\n***\n";
            cout << "The social security is: ";
            cout << pp->get_ssn() << endl;
            cout << "\n***\n";
        }
        else if (input == 3){
            cout << "\n***\n";
            cout << "Date of birth is: ";
            cout << pp->get_dob()<< endl;
            cout << "\n***\n";
        }
        else if (input == 4){
            cout << "\n***\n";
            cout << "Gender is: ";
            cout << pp->get_gender()<< endl;
            cout << "\n***\n";
        }
        else if (input == 5){
            cout << "\n***\n";
            cout << "Address is: ";
            cout << pp->get_address() << endl;
            cout << "\n***\n";
        }
        else if (input == 6){
            cout << "\n***\n";
            cout << "Home phone number is: ";
            cout << pp->get_phone()<< endl;
            cout << "\n***\n";
        }
        else if (input == 7){
            cout << "\n***\n";
            cout << "Enter new name: ";
            string nm;
            cin >> nm;
            pp->change_name(nm);
        }
        else if (input == 8){
            cout << "\n***\n";
            cout << "Enter new gender: ";
            string g;
            cin >> g;
            pp->change_gender(g);
        }
        else if (input == 9){
            cout << "\n***\n";
            cout << "Enter new address: ";
            string addrs;
            cin >> addrs;
            pp->change_address(addrs);
        }
        else if (input == 10){
            cout << "\n***\n";
            cout << "Enter new home phone: ";
            string hp;
            cin >> hp;
            pp->change_phone(hp);
        }
    }
}
    // Menu for Employee object:
void employee_menu(int& input, Employee* ee){
    while(true){
        cout << "\n *** Employee object Menu ***\n" << endl;
        cout << "0. Exit Menu."                 << endl;
        cout << "1. Print name."                << endl;
        cout << "2. Print SSN."                 << endl;
        cout << "3. Print date of birth."       << endl;
        cout << "4. Print gender."              << endl;
        cout << "5. Print address."             << endl;
        cout << "6. Print hire date."           << endl;
        cout << "7. Print salary."              << endl;
        cout << "8. Print work location."       << endl;
        cout << "9. Print work phone."          << endl;
        cout << "10. Print home phone number."  << endl;
        cout << "11. Change name"               << endl;
        cout << "12. Change gender"             << endl;
        cout << "13. Change address"            << endl;
        cout << "14. Change home phone."        << endl;
        cout << "15. Change salary."            << endl;
        cout << "16. Change work location."     << endl;
        cout << "17. Change work phone."        << endl;
        cin >> input;
        if (input == 0){
            cout << "\n*** Exiting Employee Menu ***\n" << endl;
            break;
        }
        else if (input == 1){
            cout << "\n***\n";
            cout << "The name is: ";
            cout << ee->get_name() << endl;
            cout << "\n***\n";

        }
        else if (input == 2){
            cout << "\n***\n";
            cout << "The social security is: ";
            cout << ee->get_ssn() << endl;
            cout << "\n***\n";
        }
        else if (input == 3){
            cout << "\n***\n";
            cout << "Date of birth is: ";
            cout << ee->get_dob()<< endl;
            cout << "\n***\n";
        }
        else if (input == 4){
            cout << "\n***\n";
            cout << "Gender is: ";
            cout << ee->get_gender()<< endl;
            cout << "\n***\n";
        }
        else if (input == 5){
            cout << "\n***\n";
            cout << "Address is: ";
            cout << ee->get_address() << endl;
            cout << "\n***\n";
        }
        else if (input == 6){
            cout << "\n***\n";
            cout << "Date of Hiring is: ";
            cout << ee->get_hire_date();
            cout << "\n***\n";
        }
        else if (input == 7){
            cout << "\n***\n";
            cout << "Salary is: ";
            cout << ee->get_salary() << endl;
            cout << "\n***\n";
        }
        else if (input == 8){
            cout << "\n***\n";
            cout << "Work location is: ";
            cout << ee->get_location();
            cout << "\n***\n";
        }
        else if (input == 9){
            cout << "\n***\n";
            cout << "Work phone is: ";
            cout << ee->get_work_phone();
            cout << "\n***\n";
        }
        else if (input == 10){
            cout << "\n***\n";
            cout << "Home phone number is: ";
            cout << ee->get_phone()<< endl;
            cout << "\n***\n";
        }
        else if (input == 11){
            cout << "\n***\n";
            cout << "Enter new name: ";
            string nm;
            cin >> nm;
            ee->change_name(nm);
        }
        else if (input == 12){
            cout << "\n***\n";
            cout << "Enter new gender: ";
            string g;
            cin >> g;
            ee->change_gender(g);
        }
        else if (input == 13){
            cout << "\n***\n";
            cout << "Enter new address: ";
            string addrs;
            cin >> addrs;
            ee->change_address(addrs);
        }
        else if (input == 14){
            cout << "\n***\n";
            cout << "Enter new home phone: ";
            string hp;
            cin >> hp;
            ee->change_phone(hp);
            }
        else if (input == 15){
            cout << "\n***\n";
            cout << "Enter new salary(just numbers): ";
            string new_sal;
            cin >> new_sal;
            ee->change_salary(new_sal);
        }
        else if (input == 16){
            cout << "\n***\n";
            cout << "Enter new work location: ";
            string work_loc;
            cin >> work_loc;
            ee->change_work_location(work_loc);
        }
        else if (input == 17){
            cout << "\n***\n";
            cout << "Enter new work phone(xxx-xxx-xxxx): ";
            string wphone;
            cin >> wphone;
            ee->change_work_phone(wphone);
        }
    }
}
    // Dependent Menu
void dependent_menu(int& input, Dependent* dd){
    while(true){
        cout << "\n *** Dependent object Menu ***\n" << endl;
        cout << "0. Exit Menu."                 << endl;
        cout << "1. Print name."                << endl;
        cout << "2. Print SSN of employee of which this person is a dependent."   << endl;
        cout << "3. Print date of birth."       << endl;
        cout << "4. Print gender."              << endl;
        cout << "5. Print address."             << endl;
        cout << "6. Print home phone number."   << endl;
        cout << "7. Change name"                   << endl;
        cout << "8. Change gender"                 << endl;
        cout << "9. Change address"                << endl;
        cout << "10. Change home phone."            << endl;
        cin >> input;
        if (input == 0){
            cout << "\n*** Exiting Dependent Menu ***\n" << endl;
            break;
        }
        else if (input == 1){
            cout << "\n***\n";
            cout << "The name is: ";
            cout << dd->get_name() << endl;
            cout << "\n***\n";

        }
        else if (input == 2){
            cout << "\n***\n";
            cout << "The social security is: ";
            cout << dd->get_ssn() << endl;
            cout << "\n***\n";
        }
        else if (input == 3){
            cout << "\n***\n";
            cout << "Date of birth is: ";
            cout << dd->get_dob()<< endl;
            cout << "\n***\n";
        }
        else if (input == 4){
            cout << "\n***\n";
            cout << "Gender is: ";
            cout << dd->get_gender()<< endl;
            cout << "\n***\n";
        }
        else if (input == 5){
            cout << "\n***\n";
            cout << "Address is: ";
            cout << dd->get_address() << endl;
            cout << "\n***\n";
        }
        else if (input == 6){
            cout << "\n***\n";
            cout << "Home phone number is: ";
            cout << dd->get_phone()<< endl;
            cout << "\n***\n";
        }
        else if (input == 7){
            cout << "\n***\n";
            cout << "Enter new name: ";
            string nm;
            cin >> nm;
            dd->change_name(nm);
        }
        else if (input == 8){
            cout << "\n***\n";
            cout << "Enter new gender: ";
            string g;
            cin >> g;
            dd->change_gender(g);
        }
        else if (input == 9){
            cout << "\n***\n";
            cout << "Enter new address: ";
            string addrs;
            cin >> addrs;
            dd->change_address(addrs);
        }
        else if (input == 10){
            cout << "\n***\n";
            cout << "Enter new home phone: ";
            string hp;
            cin >> hp;
            dd->change_phone(hp);
        }
    }
}

    // Manager Menu:
void manager_menu(int& input, Manager* ee){
    while(true){
        cout << "\n *** Manager object Menu ***\n" << endl;
        cout << "0. Exit Menu."                 << endl;
        cout << "1. Print name."                << endl;
        cout << "2. Print SSN."                 << endl;
        cout << "3. Print date of birth."       << endl;
        cout << "4. Print gender."              << endl;
        cout << "5. Print address."             << endl;
        cout << "6. Print hire date."           << endl;
        cout << "7. Print salary."              << endl;
        cout << "8. Print work location."       << endl;
        cout << "9. Print work phone."          << endl;
        cout << "10. Print home phone number."  << endl;
        cout << "11. Print title."              << endl;
        cout << "12. Change name"               << endl;
        cout << "13. Change gender"             << endl;
        cout << "14. Change address"            << endl;
        cout << "15. Change home phone."        << endl;
        cout << "16. Change salary."            << endl;
        cout << "17. Change work location."     << endl;
        cout << "18. Change work phone."        << endl;
        cout << "19. Change title."             << endl;
        cin >> input;
        if (input == 0){
            cout << "\n*** Exiting Manager Menu ***\n" << endl;
            break;
        }
        else if (input == 1){
            cout << "\n***\n";
            cout << "The name is: ";
            cout << ee->get_name() << endl;
            cout << "\n***\n";

        }
        else if (input == 2){
            cout << "\n***\n";
            cout << "The social security is: ";
            cout << ee->get_ssn() << endl;
            cout << "\n***\n";
        }
        else if (input == 3){
            cout << "\n***\n";
            cout << "Date of birth is: ";
            cout << ee->get_dob()<< endl;
            cout << "\n***\n";
        }
        else if (input == 4){
            cout << "\n***\n";
            cout << "Gender is: ";
            cout << ee->get_gender()<< endl;
            cout << "\n***\n";
        }
        else if (input == 5){
            cout << "\n***\n";
            cout << "Address is: ";
            cout << ee->get_address() << endl;
            cout << "\n***\n";
        }
        else if (input == 6){
            cout << "\n***\n";
            cout << "Date of Hiring is: ";
            cout << ee->get_hire_date();
            cout << "\n***\n";
        }
        else if (input == 7){
            cout << "\n***\n";
            cout << "Salary is: ";
            cout << ee->get_salary() << endl;
            cout << "\n***\n";
        }
        else if (input == 8){
            cout << "\n***\n";
            cout << "Work location is: ";
            cout << ee->get_location();
            cout << "\n***\n";
        }
        else if (input == 9){
            cout << "\n***\n";
            cout << "Work phone is: ";
            cout << ee->get_work_phone();
            cout << "\n***\n";
        }
        else if (input == 10){
            cout << "\n***\n";
            cout << "Home phone number is: ";
            cout << ee->get_phone()<< endl;
            cout << "\n***\n";
        }
        else if (input == 11){
            cout << "\n***\n";
            cout << "Manager title is: ";
            cout << ee->get_title()<< endl;
            cout << "\n***\n";
        }
        else if (input == 12){
            cout << "\n***\n";
            cout << "Enter new name: ";
            string nm;
            cin >> nm;
            ee->change_name(nm);
        }
        else if (input == 13){
            cout << "\n***\n";
            cout << "Enter new gender: ";
            string g;
            cin >> g;
            ee->change_gender(g);
        }
        else if (input == 14){
            cout << "\n***\n";
            cout << "Enter new address: ";
            string addrs;
            cin >> addrs;
            ee->change_address(addrs);
        }
        else if (input == 15){
            cout << "\n***\n";
            cout << "Enter new home phone: ";
            string hp;
            cin >> hp;
            ee->change_phone(hp);
            }
        else if (input == 16){
            cout << "\n***\n";
            cout << "Enter new salary(just numbers): ";
            string new_sal;
            cin >> new_sal;
            ee->change_salary(new_sal);
        }
        else if (input == 17){
            cout << "\n***\n";
            cout << "Enter new work location: ";
            string work_loc;
            cin >> work_loc;
            ee->change_work_location(work_loc);
        }
        else if (input == 18){
            cout << "\n***\n";
            cout << "Enter new work phone(xxx-xxx-xxxx): ";
            string wphone;
            cin >> wphone;
            ee->change_work_phone(wphone);
        }
        else if (input == 19){
            cout << "\n***\n";
            cout << "Enter new title: ";
            string ti;
            cin >> ti;
            ee->change_title(ti);
        }
    }
}

   // Worker Menu:
void worker_menu(int& input, Worker* ee){
    while(true){
        cout << "\n *** Worker object Menu ***\n" << endl;
        cout << "0. Exit Menu."                 << endl;
        cout << "1. Print name."                << endl;
        cout << "2. Print SSN."                 << endl;
        cout << "3. Print date of birth."       << endl;
        cout << "4. Print gender."              << endl;
        cout << "5. Print address."             << endl;
        cout << "6. Print hire date."           << endl;
        cout << "7. Print salary."              << endl;
        cout << "8. Print work location."       << endl;
        cout << "9. Print work phone."          << endl;
        cout << "10. Print home phone number."  << endl;
        cout << "11. Print project."              << endl;
        cout << "12. Change name"               << endl;
        cout << "13. Change gender"             << endl;
        cout << "14. Change address"            << endl;
        cout << "15. Change home phone."        << endl;
        cout << "16. Change salary."            << endl;
        cout << "17. Change work location."     << endl;
        cout << "18. Change work phone."        << endl;
        cout << "19. Change title."             << endl;
        cin >> input;
        if (input == 0){
            cout << "\n*** Exiting Worker Menu ***\n" << endl;
            break;
        }
        else if (input == 1){
            cout << "\n***\n";
            cout << "The name is: ";
            cout << ee->get_name() << endl;
            cout << "\n***\n";

        }
        else if (input == 2){
            cout << "\n***\n";
            cout << "The social security is: ";
            cout << ee->get_ssn() << endl;
            cout << "\n***\n";
        }
        else if (input == 3){
            cout << "\n***\n";
            cout << "Date of birth is: ";
            cout << ee->get_dob()<< endl;
            cout << "\n***\n";
        }
        else if (input == 4){
            cout << "\n***\n";
            cout << "Gender is: ";
            cout << ee->get_gender()<< endl;
            cout << "\n***\n";
        }
        else if (input == 5){
            cout << "\n***\n";
            cout << "Address is: ";
            cout << ee->get_address() << endl;
            cout << "\n***\n";
        }
        else if (input == 6){
            cout << "\n***\n";
            cout << "Date of Hiring is: ";
            cout << ee->get_hire_date();
            cout << "\n***\n";
        }
        else if (input == 7){
            cout << "\n***\n";
            cout << "Salary is: ";
            cout << ee->get_salary() << endl;
            cout << "\n***\n";
        }
        else if (input == 8){
            cout << "\n***\n";
            cout << "Work location is: ";
            cout << ee->get_location();
            cout << "\n***\n";
        }
        else if (input == 9){
            cout << "\n***\n";
            cout << "Work phone is: ";
            cout << ee->get_work_phone();
            cout << "\n***\n";
        }
        else if (input == 10){
            cout << "\n***\n";
            cout << "Home phone number is: ";
            cout << ee->get_phone()<< endl;
            cout << "\n***\n";
        }
        else if (input == 11){
            cout << "\n***\n";
            cout << "Worker project is: ";
            cout << ee->get_project()<< endl;
            cout << "\n***\n";
        }
        else if (input == 12){
            cout << "\n***\n";
            cout << "Enter new name: ";
            string nm;
            cin >> nm;
            ee->change_name(nm);
        }
        else if (input == 13){
            cout << "\n***\n";
            cout << "Enter new gender: ";
            string g;
            cin >> g;
            ee->change_gender(g);
        }
        else if (input == 14){
            cout << "\n***\n";
            cout << "Enter new address: ";
            string addrs;
            cin >> addrs;
            ee->change_address(addrs);
        }
        else if (input == 15){
            cout << "\n***\n";
            cout << "Enter new home phone: ";
            string hp;
            cin >> hp;
            ee->change_phone(hp);
            }
        else if (input == 16){
            cout << "\n***\n";
            cout << "Enter new salary(just numbers): ";
            string new_sal;
            cin >> new_sal;
            ee->change_salary(new_sal);
        }
        else if (input == 17){
            cout << "\n***\n";
            cout << "Enter new work location: ";
            string work_loc;
            cin >> work_loc;
            ee->change_work_location(work_loc);
        }
        else if (input == 18){
            cout << "\n***\n";
            cout << "Enter new work phone(xxx-xxx-xxxx): ";
            string wphone;
            cin >> wphone;
            ee->change_work_phone(wphone);
        }
        else if (input == 19){
            cout << "\n***\n";
            cout << "Enter new project: ";
            string ti;
            cin >> ti;
            ee->change_project(ti);
        }
    }
}