#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
protected:
	string manufacturer;
	int yearBuilt;

public:
	Vehicle(const string manufacturer, int yearBuilt);
	string getManufacturer() const;
	void setManufacturer(const string manufacturer);
	int getYearBuilt() const;
	void setYearBuilt(int yearBuilt);
	void displayInfo() const;
};
#endif // VEHICLE_H

// this file has variables, functions, and the Vehicle class.
// this vehicle file will be used in main
