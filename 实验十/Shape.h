#ifndef SHAPE_H
#define SHAPE_H
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

const double PI = acos(-1);

class Shape
{
public:
	Shape();
	~Shape();
	virtual double getCircumference() = 0;
	virtual void showInfo() = 0;
	virtual int getType() = 0;
	bool operator>(Shape* shape2);
private:

};

Shape::Shape()
{

}

Shape::~Shape()
{
}

bool Shape::operator>(Shape * shape2)
{
	return (this->getCircumference() > shape2->getCircumference());

}

class Circle : public Shape
{
public:
	Circle(double r = 0);
	~Circle();
	double getCircumference();
	double getR();
	int getType();
	void showInfo();

private:
	double r;
	int type;
};

Circle::Circle(double r)
{
	this->r = r;
	type = 1;
}

Circle::~Circle()
{
}





double Circle::getCircumference() {
	return 2 * PI * getR();
}

double Circle::getR()
{
	return r;
}

int Circle::getType()
{
	return type;
}

void Circle::showInfo()
{
	cout << fixed << setprecision(2) << "圆，半径" << getR() << "，周长" << getCircumference() << endl;
}




class Rectangle : public Shape
{
public:
	Rectangle(double l = 0, double w = 0);
	~Rectangle();
	double getCircumference();
	double getL();
	double getW();
	int getType();
	void showInfo();
private:
	double l, w;
	int type;
};

Rectangle::Rectangle(double l, double w)
{
	this->l = l;
	this->w = w;
	type = 2;
}

Rectangle::~Rectangle()
{
}

double Rectangle::getCircumference()
{
	return 2 * (getL() + getW());
}

double Rectangle::getL()
{
	return l;
}

double Rectangle::getW()
{
	return w;
}

int Rectangle::getType()
{
	return type;
}

void Rectangle::showInfo()
{
	cout << fixed << setprecision(2) <<  "长方形，长" << getL() << ",宽" << getW() << "，周长" << getCircumference() << endl;
}

class RightTriangle : public Shape
{
public:
	RightTriangle(double r1 = 0, double r2 = 0);
	~RightTriangle();
	double getCircumference();
	double getR1();
	double getR2();
	int getType();
	void showInfo();
private:
	double r1, r2;
	int type;
};

RightTriangle::RightTriangle(double r1, double r2)
{
	this->r1 = r1;
	this->r2 = r2;
	type = 3;
}

RightTriangle::~RightTriangle()
{
}

double RightTriangle::getCircumference()
{
	double r1 = getR1();
	double r2 = getR2();
	double r3 = sqrt(getR1() * getR1() + getR2() * getR2());
	return r1 + r2 + r3;

}

double RightTriangle::getR1()
{
	return r1;
}

double RightTriangle::getR2()
{
	return r2;
}

int RightTriangle::getType()
{
	return type;
}

void RightTriangle::showInfo()
{
	cout << fixed << setprecision(2) << "三角形，直角边" << getR1() << "，直角边" << getR2() << "，周长" << getCircumference() << endl;
}
#endif
