#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle(const string manufacturer, int yearBuilt) : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

string Vehicle::getManufacturer() const { // get the manufacturer
  return manufacturer;
}
void Vehicle::setManufacturer(const string manufacturer) { // setting manufacturer
  this->manufacturer = manufacturer; // navigating
}
int Vehicle::getYearBuilt() const { // get the year built
  return yearBuilt;
}
void Vehicle::setYearBuild(int yearBuilt) { // set year built
  this->yearBuilt = yearBuilt;
}
void Vehicle::displayInfo() const { // displaying the info gathered from previous functions
  cout << "Manufacturer: " << manufacturer << endl;
  cout << "Year Built: " << yearBuilt << endl;
}

