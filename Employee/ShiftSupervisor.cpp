#include <iostream>
#include "ShiftSupervisor.h"

using namespace std;

ShiftSupervisor::ShiftSupervisor(double sal, double bonu, string n, stringnum, string date):Employee(n,num,date)
{
  salary = sal;
  bonus = bonu;
}

shiftSupervisor::ShiftSupervisor(double sal, double bonu, Employee E): Employee(E.getNumber(),E.getHireDate())
{
  salary = sal;
  bonus = bonu;
}

double ShiftSupervisor::getSalary()
{
  return salary;
}

double ShiftSupervisor::getBonus()
{
  return bonus;
}
