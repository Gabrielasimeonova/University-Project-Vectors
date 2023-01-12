#ifndef _TRIANGLE_H
#define _TRIANGLE_H
#include "stdafx.h"
#include "Point.h"
#include <iostream>

using namespace std;

class Triangle :public Point {
public:
	Triangle();
	Triangle(const Point&, const Point&, const Point&);
	int type() const;
	double area() const;
	double perimeter() const;
	Point centroid(const Point&, const Point&, const Point&) const;
	bool operator<(const Point&);
	bool operator ==(const Point&);
	bool operator >(const Point&);



	virtual ostream& inserter(ostream&) const;
	virtual istream& extractor(istream&);

	/*
	double dot(Point a, Point b);
	void cross(Point r, Point a, Point b);
	void diff(Point r, Point a, Point b);
	bool operator >(const Point& p); // false if not
	bool operator <(const Point& p); //true if not
	*/
};
ostream& operator << (ostream&, const Triangle&);
istream& operator >> (istream&, Triangle&);

#pragma once
#endif
