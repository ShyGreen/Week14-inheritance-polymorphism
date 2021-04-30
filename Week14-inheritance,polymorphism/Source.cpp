// Collin McGhee
// CIS 1202 101
// April 30 2021

#include<iostream>
#include<string>
#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"
using namespace std;

int main()
{
	string make;
	int year;
	int doors;
	double towing;

	cout << "Vehicle: " << endl;
	cout << "Enter the manufacturer: ";
	cin >> make;
	cout << "Enter the year: ";
	cin >> year;
	Vehicle vehicle(make, year);
	vehicle.displayInfo();
	cout << endl;

	cout << "Car: " << endl;
	cout << "Enter the manufacturer: ";
	cin >> make;
	cout << "Enter the year: ";
	cin >> year;
	cout << "Enter number of doors: ";
	cin >> doors;
	Car car(doors);
	car.setManufacturer(make);
	car.setYear(year);
	car.displayInfo();
	cout << endl;

	cout << "Truck: " << endl;
	cout << "Enter the manufacturer: ";
	cin >> make;
	cout << "Enter the year: ";
	cin >> year;
	cout << "Enter towing capacity: ";
	cin >> towing;
	Truck truck(towing);
	truck.setManufacturer(make);
	truck.setYear(year);
	truck.displayInfo();
	cout << endl;

	return 0;
}