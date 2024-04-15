#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
using namespace std;

class Car : public Vehicle {
private:
  int doorNums;

public:
  Car(const string manufacturer, int yearBuilt, int doorNums);
  int getDoorNums() const;
  void setDoorNum(int doorNums);
  void displayInfo() const override;
}
#endif // CAR_H
// same as vehicle.h even though vehicle.h is present in this file.
// assumed use will be in car.cpp and main?
