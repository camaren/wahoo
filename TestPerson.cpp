//
// Created by Camaren on 4/23/17.
//
#include "Datasimdate.hpp"
#include "Person.h"
#include <string>
using namespace std;

int main()
{
    DatasimDate myBirthday(24, 12, 1984);
    string myName ("Camaren N. Subhiyah");
    Person dd(myName, myBirthday);
    dd.print();

    DatasimDate pBirthday(4, 10, 1976);
    string pName ("Gabe Levine");
    Person pd(pName, pBirthday);
    pd.print();
    return(0);
}
