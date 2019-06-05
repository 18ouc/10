#ifndef HOLIDAY_1H_
#define HOLIDAY_1H_
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using std::string;
using std::cout;
using std::endl;
class Ticket {
private:
	int destination;
	string dtname;
	int price;
	enum destination1 { DomesticShort, DomesticLong, International };
public:
	Ticket();
	int getPrice() { return price; }
	int getDestination() { return destination; }
	string getdtname() { return dtname; }
	void showDestination();
	void showPrice();

};
class Luggage {
private:
	int num;
	string *name;
public:
	Luggage(char c = 'A');
	int getnum() { return num; }
	void showLuggage();
	~Luggage() { delete[] name; }

};
class Passenger {
private:
	enum wayout { Personal, Travelagency };
	Ticket* t;
	Luggage* l;
	int choice;
	string choicename;
	string name;
	int ticketCost;
	int luggageCost;
	static int count;
public:
	Passenger();
	int getCost() { return ticketCost; }
	int getWay() { return choice; }
	string getname() { return name; }
	int getDestination() { return t->getDestination(); }
	string getdtname() { return t->getdtname(); }
	void showPassenger();
	~Passenger() {
		delete t;
	}
};
class Team {
private:
	Passenger* p[6];
	int numOfPa;
	int sumCost;
	int destination;
	string dtname;
	enum destination1 { DomesticShort, DomesticLong, International };
public:
	Team();
	string getdtname() { return dtname; }
	int getNum() { return numOfPa; }
	int getCost() { return sumCost; }
	bool isfull() { return numOfPa > 5; }
	bool isright(Passenger* p);
	void insertPeople(Passenger* p);
};
class TravelAgency {
private:
	Team* t;
	int numOfteam;
	int num;
	enum wayout { Personal, Travelagency };
	enum destination1 { DomesticShort, DomesticLong, International };
public:
	TravelAgency(Passenger* p = nullptr, int num = 0);
	void signUp(Passenger* p, int num);
	void showAgency()const;
};
class TicketOffice {
private:
	Passenger* p;
	int sum[6];
	string name[6];
	string Pname[6];
	int num;
	enum wayout { Personal, Travelagency };
	enum destination1 { DomesticShort, DomesticLong, International };
public:
	TicketOffice(Passenger* p1, int n);
	void sold();
	void show();

};
#endif