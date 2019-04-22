#pragma once
#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

class ProductionWorker: public Employee
{
	int shift;
	double hourlyPay;
	
public:
	int getShift();
	double getHourlyPay();
	
	ProductionWorker(int, double, string, string, string);
	ProductionWorker(int, double, Employee);
};

