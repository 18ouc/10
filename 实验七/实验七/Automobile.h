//Automobile.h
#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H
using namespace std;
#include <string>
class Park;
class Automobile
{
public:
	void enter(Park *park);
	string getName();
	void leave(Park *park);
	Automobile(string name, int payment = 0);
protected:
	string name;
	int payment;
	virtual int pay() = 0;
};
#endif // AUTOMOBILE_H
