#include "Vehicle.h"
#include<iostream>

Vehicle::Vehicle()
{
	manufacturer = "Not Set";
	year = 1900;
}

Vehicle::Vehicle(string m, int y)
{
	manufacturer = m;
	year = y;
}

string Vehicle::getManufacturer()
{
	return manufacturer;
}

int Vehicle::getYear()
{
	return year;
}

void Vehicle::setManufacturer(string m)
{
	manufacturer = m;
}

void Vehicle::setYear(int y)
{
	year = y;
}

void Vehicle::displayInfo()
{
	cout << "Manufacturer   : " << manufacturer << endl;
	cout << "Model Year     : " << year << endl;
}
