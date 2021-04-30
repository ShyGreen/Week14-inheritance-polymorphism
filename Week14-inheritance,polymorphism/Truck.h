#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{
private:
	double towingCapacity;
public:
	Truck();
	Truck(double);
	double getTowingCapacity();
	void setTowingCapacity(double);
	void displayInfo();
};

