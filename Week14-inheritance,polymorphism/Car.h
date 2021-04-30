#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{
private:
    int doors;
public:
    Car();
    Car(int);
    int getDoors();
    void setDoors(int);
    void displayInfo();
};

