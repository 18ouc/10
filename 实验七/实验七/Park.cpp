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
	cout << "ͣ����Ŀǰͣ����" << num << "������";
	if (num == 0)
		cout << "��";
	else
	{
		for (int i = 0; i < maxNum; i++)
			if (spaces[i])
				cout << spaces[i]->getName() << "��";
	}
	cout << "������" << income << "Ԫͣ����" << endl;
}
void Park::assignAutomobile(Automobile *automobile)
{
	if (num == maxNum)
		cout << "�޷�Ϊ" << automobile->getName() << "����ͣ��λ" << endl;
	else
		for (int i = 0; i < maxNum; i++)
			if (!spaces[i])
			{
				num++;
				spaces[i] = automobile;
				cout << automobile->getName() << "����ͣ����������ͣ��λ" << endl;
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
			cout << automobile->getName() << "�뿪ͣ����������ͣ����" << payment << "Ԫ" << endl;
			break;
		}
}