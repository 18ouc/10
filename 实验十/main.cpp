#include <iostream>
#include <cmath>
#include "Array.h"
#include "Shape.h"
#include "Tool.h"
using namespace std;

void init() {
	Array <Shape*> shape(100);
	int count = 0;
	cout << "1.Circle		2.Rectangle		3.Right Triangle" << endl;
	cout << "��ѡ����ͼ����" << endl;
	Shape * p;
	int op;
	cin >> op;
	while (op != -1) {
		switch (op)
		{
		case 1:
		{
			double r = 0;
			cout << "������Բ�İ뾶:" << endl;
			cin >> r;
			p = new Circle(r);
			shape[count] = p;
			break;
		}
		case 2:
		{//���ô����Ž��������
			double l, w;
			cout << "�����볤���εĳ��Ϳ�:" << endl;
			cin >> l >> w;
			p = new Rectangle(l, w);
			shape[count] = p;
			break;
		}

		case 3:
		{
			double r1, r2;
			cout << "������ֱ�������ε�����ֱ�Ǳ�" << endl;
			cin >> r1 >> r2;

			p = new RightTriangle(r1, r2);
			shape[count] = p;
			break;
		}

		default:
			cout << "Υ�����룬������ѡ��" << endl;
			count--;
		}
		count++;
		cout << "1.Circle		2.Rectangle		3.Right Triangle" << endl;
		cout << "��ѡ����ͼ����" << endl;
		cin >> op;
	}
	insert_sort(shape, count);
	int num = 1;
	for (int i = count - 1; i >= 0; i--) {
		cout << num++ << ".";
		shape[i]->showInfo();
	}
}

int main() {
	init();
	return 0;
}