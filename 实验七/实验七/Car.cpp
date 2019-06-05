//Car.cpp
#include "Car.h"
#include <string>
#include <iostream>
using namespace std;
Car::Car(string name, string name1) : Automobile(name), name1(name1)
{
	payment = pay();
}
string Car::getName1()
{
	return name1;
}
int Car::pay()
{
	return 1;
}