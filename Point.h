#ifndef POINT_H
#define POINT_H
#include "Element.h"
#include<iostream>

/*�����
����� ����� �� ������ � ��������������, ���� ������ ������ �����(x, y, z).
�� �� ��������� ���� Point, ����� �� ���������� �������� �� ��������� �� �����.
�� ����� Point �� �� ����������� ��������� == , ����� ��������� ���� ��� ����� ��������
� ��� �������� �� ����� true, � � �������� ������ false.*/


class Point :public Element {
public:
	Point();
	Point(double, double, double);
	virtual~Point();
	Point(const Point&);
	bool equality(const Point&)const;

	virtual int setx(double);
	virtual int sety(double);
	virtual int setz(double);

	double getx()const;
	double gety()const;
	double getz()const;

	int print()const;

	virtual std::ostream& inserter(std::ostream&)const;
	virtual std::istream& extractor(std::istream&); \

private:
	double x;
	double y;
	double z;
};

bool operator==(const Point&, const Point&);
std::ostream& operator<<(std::ostream&, const Point&);
std::istream& operator>>(std::istream&, Point&);

#pragma once
#endif


