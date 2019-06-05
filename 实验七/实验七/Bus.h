//Bus.h
#ifndef BUS_H
#define BUS_H
#include "Automobile.h"
#include <string>
using namespace std;
class Bus : public Automobile
{
public:
	Bus(string name, int load);
	int getLoad();
	//int pay();
private:
	int load;
protected:
	int pay();
};
#endif // BUS_H