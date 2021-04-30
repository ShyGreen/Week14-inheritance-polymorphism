#include "Car.h"
#include<iostream>
#include<string>
using namespace std;

Car::Car()
{
	doors = 2;
}

Car::Car(int d)
{
	doors = d;
}

int Car::getDoors()
{
	return doors;
}

void Car::setDoors(int d)
{
	doors = d;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "# of Doors     : " << doors << endl;
}
