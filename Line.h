#ifndef _LINE_H
#define _LINE_H
#include "stdafx.h"
#include <iostream>
#include "Vector.h"

class Line : public Vector
{
public:
	Line();

	Line(Point&, Vector&);

	Line(Point&, Point&);

	Line(const Line&);

	Line& operator=(const Line&);


	Vector normal()const;

	Vector direction()const;

	bool operator +(const Point&)const;

	Point getA() const;
	Point getB() const;


	int setA(const Point&);
	int setB(const Point&);

	virtual std::ostream& inserter(std::ostream&)const;
private:
	Point p1;
	Point p2;
};

#endif
