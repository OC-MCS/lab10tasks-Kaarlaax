#pragma once
#include <iostream>
#include "FuelGauge.h"

using namespace std;

class Odometer
{
    int milage;
    
public:
	Odometer();
    int getMilage();
    void addMile(FuelGauge &fuelInst);
};
