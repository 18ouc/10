//Car.h
#ifndef CAR_H
#define CAR_H
#include "Automobile.h"
#include <string>
using namespace std;
class Car : public Automobile
{
public:
	Car(string name, string name1);
	string getName1();
	//int pay();
private:
	string name1;
protected:
	int pay();
};
#endif // CAR_H