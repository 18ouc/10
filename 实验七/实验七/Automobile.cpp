//Automobile.cpp
#include "Automobile.h"
#include "Park.h"
#include <string>
using namespace std;
Automobile::Automobile(string name, int payment) : name(name), payment(payment) { ; }
void Automobile::enter(Park *park)
{
	park->assignAutomobile(this);
}
void Automobile::leave(Park *park)
{
	park->passAutomobile(this, payment);
}
string Automobile::getName()
{
	return name;
}