#include "Employee.h"
#include <string>
#include <iostream>

using namespace std;


Employee::Employee(string n, string num, string date)
{
  name = n;
  number = num;
  hireDate = date;
}

string Emploee::getName()
{
  neturn name;
}

string Employee::getNumber()
{
  return number;
}

string Employee::getHireDate()
{
  return hireDate;
}


