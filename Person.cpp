//
// Created by Camaren on 4/23/17.
//
#include "Person.h"

Person::Person(const string &name, const DatasimDate &DateofBirth)
{
    nam = name;
    dob = DateofBirth;
    createdD = DatasimDate();
}
void Person::print() const
{
    cout << "\n** Person Data **\n";
    cout << "Name: "<<nam<<", Date of Birth: "<<dob
                              <<", Age: "<< age() << endl;
}
int Person::age() const
{
    return int(double(DatasimDate() - dob) / 365.0);
}







