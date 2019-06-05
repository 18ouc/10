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
	cout << "请选择框架图案：" << endl;
	Shape * p;
	int op;
	cin >> op;
	while (op != -1) {
		switch (op)
		{
		case 1:
		{
			double r = 0;
			cout << "请输入圆的半径:" << endl;
			cin >> r;
			p = new Circle(r);
			shape[count] = p;
			break;
		}
		case 2:
		{//利用大括号解决作用域
			double l, w;
			cout << "请输入长方形的长和宽:" << endl;
			cin >> l >> w;
			p = new Rectangle(l, w);
			shape[count] = p;
			break;
		}

		case 3:
		{
			double r1, r2;
			cout << "请输入直角三角形的两条直角边" << endl;
			cin >> r1 >> r2;

			p = new RightTriangle(r1, r2);
			shape[count] = p;
			break;
		}

		default:
			cout << "违规输入，请重新选择！" << endl;
			count--;
		}
		count++;
		cout << "1.Circle		2.Rectangle		3.Right Triangle" << endl;
		cout << "请选择框架图案：" << endl;
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