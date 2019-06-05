//Park.cpp
#include "Park.h"
#include "Automobile.h"
#include <string>
#include <iostream>
using namespace std;
Park::Park(int N)
{
	income = 0;
	maxNum = N;
	num = 0;
	spaces = new Automobile*[N];
	for (int i = 0; i < N; i++)
		spaces[i] = NULL;
}
Park::~Park()
{
	delete[] spaces;
}
void Park::showInfo()
{
	cout << "停车场目前停放了" << num << "辆汽车";
	if (num == 0)
		cout << "，";
	else
	{
		for (int i = 0; i < maxNum; i++)
			if (spaces[i])
				cout << spaces[i]->getName() << "，";
	}
	cout << "共收入" << income << "元停车费" << endl;
}
void Park::assignAutomobile(Automobile *automobile)
{
	if (num == maxNum)
		cout << "无法为" << automobile->getName() << "分配停车位" << endl;
	else
		for (int i = 0; i < maxNum; i++)
			if (!spaces[i])
			{
				num++;
				spaces[i] = automobile;
				cout << automobile->getName() << "进入停车场，分配停车位" << endl;
				break;
			}
}
void Park::passAutomobile(Automobile *automobile, int payment)
{
	for (int i = 0; i < maxNum; i++)
		if (spaces[i] == automobile)
		{
			income += payment;
			num--;
			spaces[i] = NULL;
			cout << automobile->getName() << "离开停车场，缴纳停车费" << payment << "元" << endl;
			break;
		}
}