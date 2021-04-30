#pragma once
#include<string>
using namespace std;
class Vehicle
{
private:
	string manufacturer;
	int year;
public:
	Vehicle();
	Vehicle(string, int);
	string getManufacturer();
	int getYear();
	void setManufacturer(string);
	void setYear(int);
	void displayInfo();
};