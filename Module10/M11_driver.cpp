//*********************************************
// FILENAME: M11_driver.cpp
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 08/02/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: linklist.h, linklist.cpp, meeting.h, meeting.cpp, M11_driver.cpp
// PURPOSE: Create a LinkedList of Meeting instances in an unordered way.
//          Verify that the LinkedList is ordered By Date-Time.
//*********************************************

#include <iostream>
#include "meeting.h"
#include "linklist.h"

using std::cout;
using std::endl;
using std::cerr;

int main(void)
    {
    Meeting        *m, *m1,*m2,*m3,*m4,*m5,*m6,*m7;
    List           l;
    ListIterator  *iter; 
    List *l2;

        // Interview sessions:
    cout << "\n***Inserting unordered Meetings*** " << endl;
    m1 = new Meeting("Orlando, FL", "Kmetz, Rhonda", 9, 15, 2025, 12, 0);
    l.Insert(m1);
    m1->print();
    m2 = new Meeting("Orlando, FL", "Blair, Gary", 9, 16, 2026, 13, 0);
    l.Insert(m2); 
    m2->print();
    m3 = new Meeting("Zoom", "Phillips, Bob", 9, 15, 2025, 8,0);
    l.Insert(m3);
    m3->print();
    m4 = new Meeting("Orlando, FL", "Adams, Don", 9, 16, 2025, 16, 30);
    l.Insert(m4);
    m4->print();
    m5 = new Meeting("Teams", "Zwakenberg, Rich", 9, 16, 2025, 15, 30);
    l.Insert(m5);
    m5->print();
    m6 = new Meeting("Zoom", "Jones, Tom", 9, 15, 2025, 11, 0);
    l.Insert(m6);
    m6->print();
    m7 = new Meeting("Orlando, FL", "Johnson, Bill", 9, 15, 2025, 15, 30);
    l.Insert(m7);
    m7->print();

        // Print ordered LinkedList:
    cout << "\n\n\nOrdered list: " << endl;
    iter = new ListIterator(l);
    while ((m=(Meeting *)(iter->NextItemInList()))){
        m->print();}
    // delete iter;
    
    l2 = l.Clone();
    l.Delete(m2);
    // iter = new ListIterator(*l2);
    while ((m=(Meeting *)(iter->NextItemInList())))
        m->print();
    
}