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
  cout << "Vehicle:";
  cout << "\nEnter the manufacturer: ";
  getline(cin, manufacturer);
  cout << "\nEnter the year built: ";
  cin >> yearBuilt;
  cin.ignore();
  Vehicle vehicle(manufacturer, yearBuilt);
  cout << "\nInfo entered: " << endl;
  vehicle.displayInfo();

  // This is for Car
  int doorNums;
  cout << "\nCar:";
  cout << "\nEnter the manufacturer: ";
  getline(cin, manufacturer);
  cout << "\nEnter the year built: ";
  cin >> yearBuilt; 
  cout << "\nHow many doors: ";
  cin >> doorNums;
  cin.ignore();
  Car car(manufacturer, yearBuilt, doorNums);
  cout << "\nInfo for car entered: " << endl;
  car.displayInfo();
  
  // This is for Truck
  int towingCapacity;
  cout << "\nTruck:";
  cout << "\nEnter the manufacturer: ";
  getline(cin, manufacturer);
  cout << "\nEnter the year built: ";
  cin >> yearBuilt;
  cout << "\nEnter the towing capacity: ";
  cin >> towingCapacity;
  cin.ignore();
  Truck truck(manufacturer, yearBuilt, towingCapacity);
  cout << "\nInfo for truck entered: " << endl;
  truck.displayInfo();
}

