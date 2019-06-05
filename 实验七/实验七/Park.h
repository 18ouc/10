//Park.h
#ifndef PARK_H
#define PARK_H
class Automobile;
class Park
{
public:
	void showInfo();
	Park(int N);
	~Park();
	void assignAutomobile(Automobile *automobile);
	void passAutomobile(Automobile *automobile, int payment);
private:
	int income;
	int num;
	int maxNum;
	Automobile **spaces;
};
#endif // PARK_H