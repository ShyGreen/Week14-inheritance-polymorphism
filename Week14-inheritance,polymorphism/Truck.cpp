#include "Truck.h"
#include<iostream>

Truck::Truck()
{
	towingCapacity = 200;
}

Truck::Truck(double t)
{
	towingCapacity = t;
}

double Truck::getTowingCapacity()
{
	return towingCapacity;
}

void Truck::setTowingCapacity(double t)
{
	towingCapacity = t;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Cpacity : " << towingCapacity << endl;
}
