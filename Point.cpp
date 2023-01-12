#include "stdafx.h"
#include "Point.h"
#include <iostream>

using namespace std;

Point::Point() :x(0.), y(0.), z(0.) {
}
Point::Point(double x, double y, double z) : x(x), y(y), z(z) {
}
Point::~Point() {
}
Point::Point(const Point& rhs) : x(rhs.x), y(rhs.y), z(rhs.z) {
}

bool Point::equality(const Point& rhs)const {
	return x == rhs.x && y == rhs.y && z == rhs.z;

}

int Point::setx(double x) {
	this->x = x;
	return 0;
}
int Point::sety(double y) {
	this->y = y;
	return 0;
}
int Point::setz(double z) {
	this->z = z;
	return 0;
}

double Point::getx()const {
	return x;
}
double Point::gety()const {
	return y;
}
double Point::getz()const {
	return z;
}

int Point::print()const
{
	cout << "sth";
	return 0;
}

bool operator==(const Point& lhs, const Point& rhs) {
	if (lhs.equality(rhs))
	{
		return true;
	}
	else
		return false;
}

std::ostream& Point::inserter(std::ostream& out)const {
	out << x << std::endl << y << std::endl
		<< z << std::endl;
	return out;
}
std::istream& Point::extractor(std::istream& in) {
	in >> x >> y >> z;
	return in;
}

std::ostream& operator<<(std::ostream& lhs, const Point& rhs) {
	return rhs.inserter(lhs);
}
std::istream& operator>>(std::istream& lhs, Point& rhs) {
	return rhs.extractor(lhs);
}