// Paul Shelley
// CIS 1202.501
// 4/16/24
#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
  // This is for Vehicle
  string manufacturer;
  int yearBuilt;
  cout << "Who is the manufacturer of (VEHICLE): ";
  cin.ignore();
  getline(cin, manufacturer);
  cout << endl;
  cout << "What year was this vehicle built: ";
  cin >> yearBuilt;
  Vehicle vehicle(manufacturer, yearBuilt);
  cout << "Info entered: " << endl;
  vehicle.displayInfo();
  // This is for Car
  int doorNums;
  cout << "How many doors: ";
  cin >> doorNums;
  Car car(manufacturer, yearBuilt, doorNums);
  cout << "Info for car entered: " << endl;
  car.displayInfo();
  // This is for Truck
  int towingCapacity;
  cout << "Towing Capacity for Truck: " << endl;
  cin >> towingCapacity;
  Truck truck::(manufacturer, yearBuilt, towingCapacity);
  cout << "Info for truck entered: " << endl;
  truck.displayInfo();
}
