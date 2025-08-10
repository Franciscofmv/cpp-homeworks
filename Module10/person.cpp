
// MODULE:      person.cpp
// PROGRAMMER:  Gary J. Blair
// LANGUAGE:    C++
// DATE:        97/08/04
//
// PURPOSE:
//   Store information about a person.
//   Derive a concrete type from the ADT ListItem.

#include "person.h"
using std::cout;
using std::endl;

// Clone the item.

ListItem* Person::Clone()
{
   Person *p;

   p = new Person(name,ssn);
   return (ListItem *) p;
}

int Person::CompareByInsertKey
   ( ListItem* item_in_list )
{
   return strcmp(this->name, ((Person *)item_in_list)->name);
} 

void Person::print()
{
   cout << name << ":" << ssn << endl;
}



