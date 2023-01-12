#include "stdafx.h"'
#include "Segment.h"
#include <iostream>
#include <cmath>

#define radiansToDegree 57.2958

Segment::Segment(Point p1, Vector v1, double t) {
	this->p1 = p1;
	this->v1 = v1;
	this->t = t;
}

Segment::Segment(const Segment&)
{
}

Segment::~Segment() {}

double Segment::lenght() {
	if (v1.getx() == 0 && v1.gety() == 0 && v1.getz() == 0) {


		double xend = p1.getx() + (v1.getx() * t);
		double yend = p1.gety() + (v1.gety() * t);
		double zend = p1.getz() + (v1.getz() * t);

		double x = xend - p1.getx();
		double y = yend - p1.gety();
		double z = zend = p1.getx();

		double sum = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
		return sum;
	}

	else {

		double xend = p1.getx() + (v1.getx() * t);
		double yend = p1.gety() + (v1.gety() * t);
		double zend = p1.getz() + (v1.getz() * t);

		double x = xend - v1.getx();
		double y = yend - v1.gety();
		double z = zend - v1.getz();

		double sum = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
		return sum;
	}
}

Point Segment::middle() {
	if (v1.getx() == 0 && v1.gety() == 0 && v1.getz() == 0) {

		double xend = p1.getx() + (v1.getx() * t);
		double yend = p1.gety() + (v1.gety() * t);
		double zend = p1.getz() + (v1.getz() * t);

		double x = (p1.getx() + xend) / 2;
		double y = (p1.gety() + yend) / 2;
		double z = (p1.getz() + zend) / 2;

		Point a = Point(x, y, z);
		return a;
	}

	else {

		double xend = p1.getx() + (v1.getx() * t);
		double yend = p1.gety() + (v1.gety() * t);
		double zend = p1.getz() + (v1.getz() * t);

		double x = (p1.getx() + xend) / 2;
		double y = (p1.gety() + yend) / 2;
		double z = (p1.getz() + zend) / 2;
		Point a = Point(x, y, z);
		return a;
	}
}

bool Segment::operator==(const Point& rhs) {
	if (v1.getx() == 0 && v1.gety() == 0 && v1.getz() == 0) {


		double xend = p1.getx() + (v1.getx() * t);
		double yend = p1.gety() + (v1.gety() * t);
		double zend = p1.getz() + (v1.getz() * t);


		double BA = sqrt(pow(xend - p1.getx(), 2) + pow(yend - p1.gety(), 2) + pow(zend - p1.getz(), 2));
		double AP = sqrt(pow(rhs.getx() - p1.getx(), 2) + pow(rhs.gety() - p1.gety(), 2) + pow(rhs.getz() - p1.getz(), 2));
		double PB = sqrt(pow(xend - rhs.getx(), 2) + pow(yend - rhs.gety(), 2) + pow(zend - rhs.getz(), 2));

		double cosAB = (pow(PB, 2) + pow(AP, 2) - pow(BA, 2)) / (2 * PB * AP);
		double ABangle = acos(cosAB) * radiansToDegree;

		if (ABangle >= 178 && ABangle <= 180) {
			return true;
		}

		else {
			return false;
		}
	}

	else {


		double xend = p1.getx() + (v1.getx() * t);
		double yend = p1.gety() + (v1.gety() * t);
		double zend = p1.getz() + (v1.getz() * t);


		double AB = sqrt(pow(xend - p1.getx(), 2)
			+ pow(yend - p1.gety(), 2)
			+ pow(zend - p1.getz(), 2));
		double AP = sqrt(pow(rhs.getx() - p1.getx(), 2)
			+ pow(rhs.gety() - p1.gety(), 2)
			+ pow(rhs.getz() - p1.getz(), 2));
		double PB = sqrt(pow(xend - rhs.getx(), 2) + pow(yend - rhs.gety(), 2) + pow(zend - rhs.getz(), 2));
		double cos_AB = (pow(PB, 2) + pow(AP, 2) - pow(AB, 2)) / (2 * PB * AP);
		double AB_angle = acos(cos_AB) * radiansToDegree;

		if (AB_angle >= 178 && AB_angle <= 180) {
			return true;
		}

		else {
			return false;
		}
	}
}


std::istream& Segment::extractor(std::istream& in) {
	std::cout << "Enter coos for point: " << std::endl;
	in >> p1;
	std::cout << std::endl;
	std::cout << "Enter coos for vector" << std::endl;
	in >> v1;
	std::cout << std::endl;
	std::cout << "Enter value for the time (t) in seconds" << std::endl;
	in >> t;
	std::cout << std::endl;
	return in;
}

std::istream& operator>>(std::istream& in, Segment& p) {
	p.extractor(in);
	return in;
}