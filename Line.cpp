#include "stdafx.h"
#include "Vector.h"
#include "Line.h"
#include <iostream>
#include <cmath>
#include "EqualPointException.h"
#include "Line.h"
#include<cmath>

Line::Line(Point& lhs, Vector& rhs) :p2(lhs)
{
	lhs.setx(rhs.getx());
	lhs.sety(rhs.gety());
	lhs.setz(rhs.getz());
}

Line::Line(Point& lhs, Point& rhs) :p1(lhs), p2(rhs) {}

Line::Line(const Line& rhs) : Vector(rhs) {}

Line& Line::operator=(const Line& rhs)
{
	if (this != &rhs)
	{
		p1 = rhs.p1;
		p2 = rhs.p2;
	}
	return *this;
}

ostream& Line::inserter(ostream& out) const
{
	cout << p1;
	cout << p2;
	return out;
}


int Line::setA(const Point& lhs)
{
	p1 = lhs;
	return 0;
}

int Line::setB(const Point& lhs)
{
	p2 = lhs;
	return 0;
}

Point Line::getA()const
{
	return p1;
}

Point Line::getB()const
{
	return p2;
}

Vector Line::direction()const
{
	return Vector(p2.getx() - p1.getx(), p2.gety() - p1.gety(), p2.getz() - p1.getz());
}

Vector Line::normal()const
{
	Vector temp(p1, p2);
	return temp.direction();
}


bool Line::operator +(const Point& rhs)const
{
	double k = (rhs.getx() - p1.getx()) / (p2.getx() - p1.getx());
	double l = (rhs.gety() - p1.gety()) / (p2.gety() - p1.gety());
	double m = (rhs.getz() - p1.getz()) / (p2.getz() - p1.getz());
	bool r = (k == l == m);
	return r;
}