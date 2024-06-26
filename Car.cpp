#include "Car.h"
#include <iostream>

using namespace std; 

Car::Car(const string manufacturer, int yearBuilt, int doorNums) : Vehicle(manufacturer, yearBuilt), doorNums(doorNums) {}

int Car::getDoorNum() const {
  return doorNums;
}
void Car::setDoorNum(int doorNums) {
  this->doorNums = doorNums;
}
void Car::displayInfo() const {
  Vehicle::displayInfo();
  cout << "Number of Doors: " << doorNums << endl;
}
// come back to add and change later
