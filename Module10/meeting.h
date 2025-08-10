//*********************************************
// FILENAME: meeting.h
// PROGRAMMER: Francisco Moyet Vargas
// DATE: 08/02/2025
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// REQUIRED: meeting.h, meeting.cpp
// PURPOSE: Interface for the Meeting class. 
//*********************************************
#include <iostream>
#include "linklist.h"

using std::string;

#ifndef MEETING_H_
#define MEETING_H_
class Date;

class Meeting : public ListItem{
    protected:
        string location;
        unsigned int month;
        unsigned int day;
        unsigned int year;
        unsigned int hour;
        unsigned int minutes;
        string person;
    public:
        Meeting(
            string loc, string prson, unsigned int mm, unsigned int dd, 
            unsigned int yr, unsigned int hr, unsigned int mn
        );
        virtual int CompareByInsertKey( ListItem* item_in_list );
        virtual ListItem* Clone();
        void print();
};

#endif