#ifndef SEGMENT_H
#define SEGMENT_H
#include "Point.h"
#include "Line.h"
#include "Segment.h"

class Segment : public Line {

public:

	Segment(Point, Vector, double);

	Segment(const Segment&);

	virtual ~Segment();

	double lenght();

	Point middle();

	bool operator==(const Point&);

	virtual std::istream& extractor(std::istream&);

private:
	Point p1;
	Vector v1;
	double t;
};

std::istream& operator>>(std::istream&, Line&);

#endif 

