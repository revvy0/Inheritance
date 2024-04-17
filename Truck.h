#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle {
private: 
  int towingCapacity;

public:
  Truck(const string manufacturer, int yearBuilt, int towingCapacity);
  int getTowingCapacity() const;
  void setTowingCapacity(int towingCapacity);
  void displayInfo() const; 
};
#endif // TRUCK_H
