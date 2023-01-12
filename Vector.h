#ifndef VECTOR_H
#define VECTOR_H
#include "Point.h"
#include <iostream>

class Vector :public Point {
public:
	Vector(double = 0., double = 0., double = 0.);
	Vector(const Point&, const Point&);
	virtual ~Vector();
	Vector(const Vector&);

	Vector projection(Vector&);
	bool parallelism(Vector&);
	bool perpendicularity(Vector&);

	double lengthOfVector();
	bool zeroVector() const;
	Vector direction();


	double operator * (const Vector&);
	friend Vector operator + (const Vector&, const Vector&);
	friend Vector operator - (const Vector&, const Vector&);
	Vector operator *(double);
	Vector operator^ (const Vector&);
	double operator()(const Vector&, const Vector&);

	virtual ostream& inserter(ostream&) const;
	virtual istream& extractor(istream&);
};

ostream& operator << (ostream&, const Vector&);
istream& operator >> (istream&, Vector&);


#endif

#pragma once

