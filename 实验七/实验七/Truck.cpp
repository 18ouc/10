//Truck.cpp
#include "Truck.h"
#include <string>
#include <iostream>
using namespace std;
Truck::Truck(string name, double weight) : Automobile(name), weight(weight)
{
	payment = pay();
}
double Truck::getWeight()
{
	return weight;
}
int Truck::pay()
{
	return 3;
}