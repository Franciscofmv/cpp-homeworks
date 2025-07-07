#include <iostream>
#include "person.h"
#include "employee.h"

using std::cout;
using std::endl;
using std::cin;

void person_menu(Person& person);
void print_person_input(Person & p, int& opt);
int main(){
    int loop = 1;
    int person_flag = 0;

    cout << "\n *** Define a Person ***" << endl;
    Person person;

    cout << "\n *** Define a Employee ***" << endl;
    Employee emp;

    int input = 9;
    while (true){
        cout << "\nPlease, select an option:\n" << endl;
        cout << "0. Exit program" << endl;
        cout << "1. Print information about "<< person.print_name() <<" (Person)."<< endl;
        cout << "2. Print information about " << emp.print_name() << " (Employee)." << endl;
        cin >> input;
        if(input == 0){
            break;
        }else if(input == 1){
            person_menu(person);
    }
    return 0;
}


void person_menu(Person& person){
    int input = 0;
    while(true){
        cout << "\nPlease, select an option for "<< person.print_name() <<" (Person):\n" << endl;
        cout << "0. Exit Menu." << endl;
        cout << "1. Print name." <<endl;
        cout << "2. Print date of birth." << endl;
        cout << "3. Print gender." << endl;
        cout << "4. Print address." << endl;
        cout << "5. Print home phone number." << endl;
        cin >> input;
        if (input == 0){ break;}
        print_person_input(person, input);
    }
}
void print_person_input(Person & p, int& opt){
    if (opt == 1){
        cout << p.print_name() << endl;}
    else if (opt == 2){
        cout << p.print_dob() << endl;}
    else if (opt == 3){
        cout << p.print_gender() << endl;}
    else if (opt == 4){
        cout << p.print_address() << endl;}
    else if (opt == 5){
        cout << p.print_phone() << endl;}
}