#pragma once
#include "Employee.h"
#include <iostream>

using namespace std;

class ShiftSupervisor : public Employee
{
    double salary;
    double bonus;
    
public:
    
    ShiftSupervisor(double sal, double bonu, string n, string num, string date);
    ShiftSupervisor(double sal, double bonu, Employee E);
    
    double getSalary();
    double getBonus();
};
