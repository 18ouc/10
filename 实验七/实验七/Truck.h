//Truck.h
#ifndef TRUCK_H
#define TRUCK_H
#include "Automobile.h"
#include <string>
using namespace std;
class Truck : public Automobile
{
public:
	Truck(string name, double weight);
	double getWeight();
	//int pay();
private:
	double weight;
protected:
	int pay();
};
#endif // TRUCK_H