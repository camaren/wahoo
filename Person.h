//
// Created by Camaren on 4/23/17.
//

#ifndef WAHOO_PERSON_H
#define WAHOO_PERSON_H

#include "datasimdate.hpp"
#include <string>

using namespace std;

class Person
{
public:
    string nam;
    DatasimDate dob;
    DatasimDate createdD;
public:
    Person (const string& name,
            const DatasimDate& DateofBirth);
    void print() const;
    int age() const;
};

#endif //WAHOO_PERSON_H
