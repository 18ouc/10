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
	cout << "������ͣ��λ������";
	cin >> N;
	Park *park = new Park(N);
	Car car1("³B-12345", "�µ�A6");
	car1.enter(park);
	Truck truck("³B-23456", 15);
	truck.enter(park);
	car1.leave(park);
	Bus bus("³B-34567", 50);
	bus.enter(park);
	park->showInfo();
	Car car2("³B-45678", "����320");
	car2.enter(park);
	bus.leave(park);
	truck.leave(park);
	park->showInfo();
	delete park;
	return 0;
}