#ifndef POINT_H
#define POINT_H
#include "Element.h"
#include<iostream>

/*Точка
Всяка точка се описва в пространството, чрез тройка реални числа(x, y, z).
Да се реализира клас Point, който да предоставя средства за създаване на точка.
За класа Point да се предефинира оператора == , който проверява дали две точки съвпадат
и ако съвпадат да връща true, а в противен случай false.*/


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


