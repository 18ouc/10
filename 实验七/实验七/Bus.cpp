//Bus.cpp
#include "Bus.h"
#include <string>
#include <iostream>
using namespace std;
Bus::Bus(string name, int load) : Automobile(name), load(load)
{
	payment = pay();
}
int Bus::getLoad()
{
	return load;
}
int Bus::pay()
{
	return 2;
}