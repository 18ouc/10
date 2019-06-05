//main.cpp
#include "Park.h"
#include "Automobile.h"
#include "Car.h"
#include "Truck.h"
#include "Bus.h"
#include <string>
#include <iostream>
using namespace std;
int main()
{
	int N;
	cout << "ÇëÊäÈëÍ£³µÎ»ÊýÁ¿£º";
	cin >> N;
	Park *park = new Park(N);
	Car car1("Â³B-12345", "°ÂµÏA6");
	car1.enter(park);
	Truck truck("Â³B-23456", 15);
	truck.enter(park);
	car1.leave(park);
	Bus bus("Â³B-34567", 50);
	bus.enter(park);
	park->showInfo();
	Car car2("Â³B-45678", "±¦Âí320");
	car2.enter(park);
	bus.leave(park);
	truck.leave(park);
	park->showInfo();
	delete park;
	return 0;
}