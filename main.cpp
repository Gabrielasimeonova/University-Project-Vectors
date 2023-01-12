#include "stdafx.h"
#include <iostream>
#include "Element.h"
#include "Point.h"
#include "Segment.h"
#include "Triangle.h"
#include "VectorLenghtException.h"
#include "EqualPointException.h"
#include <exception>
#include "Line.h"
#include "Segment.h"
#include <locale>
#include <fstream>
#include "Vector.h"

using namespace std;


int main()
{
	locale::global(locale("Bulgarian"));
	Point point1, point2, point3, point4;
	Vector vector1, vector2, vector3, vector4;
	Line line1(point1, point2);
	Triangle triangle1(point1, point2, point3);
	unsigned figure;
	double realNum;
	size_t operation;
	char input = ' ';

Label1: cout << "Моля, изберете вид геометричен обект: " << endl;
	cout << "1 Точка " << endl;
	cout << "2 Вектор " << endl;
	cout << "3 Линия " << endl;
	cout << "4 Триъгълник " << endl;
	cin >> figure;
	switch (figure)
	{
	case 1: {
		cout << "Моля, въведете координати за точката: " << endl;
		cin >> point1;
	Label2:		cout << "Моля, изберете операция за обекта: " << endl;
		cout << "1 проверяване дали две точки съвпадат " << endl;
		cin >> operation;
		switch (operation) {
		case 1: {
			cin >> point2;
			if (point1 == point2)
			{
				cout << "Точките съвпадат. " << endl;
			}
			else
			{
				cout << "Точките не съвпадат. " << endl;
			}
			cout << "Желаете ли да изпробвате за точки с други координати? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label2;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете нов геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		}
	}

	case 2: {
		cout << "Моля, въведете вектор: " << endl;
		cin >> vector1;

	Label3: cout << "Моля, изберете операция за обекта: " << endl;
		cout << "1 Изчисляване на дължина на вектор " << endl;
		cout << "2 Изчисляване на посоката на вектор " << endl;
		cout << "3 Проекция на вектор върху друг вектор " << endl;
		cout << "4 Проверка за нулев вектор " << endl;
		cout << "5 Проверка за успоредност на два вектора " << endl;
		cout << "6 Проверка за перпендикулярност на два вектора " << endl;
		cout << "7 Събиране на два вектора " << endl;
		cout << "8 Умножение на вектор с реално число " << endl;
		cout << "9 Скаларно произведение на два вектора " << endl;
		cout << "10 Векторно произведение на два вектора " << endl;
		cout << "11 Векторно (смесено) произведение на три вектора " << endl;
		cin >> operation;
		switch (operation) {
		case 1: {
			cout << "Дължината на вектора е: " << vector1.lengthOfVector() << endl;
			cout << "Желаете ли да изберете нова операция? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете нов геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 2: {

			cout << "Посоката на вектора е: " << vector1.direction() << endl;
			cout << "Желаете ли да изберете нова операция? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете нов геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 3: {
			cout << "Въведете координати за втори вектор: " << endl;
			cin >> vector2;
			cout << "Проекцията е: " << vector1.projection(vector2) << endl;
			cout << "Желаете ли да изберете нова операция? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете нов геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 4: {
			if (vector1.zeroVector())
			{
				cout << "Да, нулев вектор е. " << endl;
			}
			else
			{
				cout << "Не, не е нулев вектор. " << endl;
			}
			cout << "Желаете ли да изберете нова операция? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете нов геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'ny')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 5:
		{
			cout << "Въведете координати за втори вектор: " << endl;
			cin >> vector2;
			if (vector1.parallelism(vector2))
			{
				cout << "Да, успоредни са. " << endl;
			}
			else
			{
				cout << "Не, не са успоредни. " << endl;
			}

			cout << "Желаете ли да изберете нова операция? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете нов геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 6: {
			cout << "Въведете координати за втори вектор: " << endl;
			cin >> vector2;
			if (vector1.perpendicularity(vector2))
			{
				cout << "Да, перпендикулярни са. " << endl;
			}
			else
			{
				cout << "Не, не са перпендикулярни. " << endl;
			}

			cout << "Желаете ли да изберете нова операция? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете нов геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 7: {
			cout << "Въведете координати за втори вектор: " << endl;
			cin >> vector2;
			cout << vector1 + vector2 << endl;
			cout << "Желаете ли да изберете нова операция? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете нов геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 8: {
			cout << "Моля, въведете реално число: " << endl;
			cin >> realNum;
			cout << vector1 * realNum << endl;
			cout << "Желаете ли да изберете нова операция? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете нов геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 9: {
			cout << "Моля, въведете координати за втори вектор: " << endl;
			cin >> vector2;
			cout << vector1 * vector2 << endl;
			cout << "Желаете ли да изберете нова операция? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете нов геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 10: {
			cout << "Моля, въведете координати за втори вектор: " << endl;
			cin >> vector2;
			vector3 = vector1 ^ vector2;
			cout << vector3 << endl;
			cout << "Желаете ли да изберете нова операция? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете нов геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 11: {
			cout << "Моля, въведете координати за втори вектор: " << endl;
			cin >> vector2;
			cout << "Моля, въведете координати за трети вектор: " << endl;
			cin >> vector3;
			cout << vector1(vector2, vector3) << endl;
			cout << "Желаете ли да изберете нова операция? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете нов геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
			   break;
		}
	}

	case 3:
	{
		cout << "Моля, въведете координати за точка: " << endl;
		cin >> point1;
		cout << "Моля, въведете координати за точка: " << endl;
		cin >> point2;
		Line line1(point1, point2);
	Label4: cout << "Изберете операция за обекта: " << endl;
		cout << "1 Намиране на посока на линията " << endl;
		cout << "2 Намиране на нормален вектор " << endl;
		cout << "3 Дали точка лежи на дадена права " << endl;
		cin >> operation;
		switch (operation)
		{
		case 1: {
			cout << "Посока на линията: " << endl;
			cout << line1.direction();
			cout << "Желаете ли да изберете друга операция? (y / n) " << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label4;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете друг геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 2: {
			cout << "Нормален вектор: " << endl;
			cout << line1.normal();
			cout << "Желаете ли да изберете друга операция? (y / n) " << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label4;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете друг геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 3: {
			cout << "Въведете координати за точка: " << endl;
			cin >> point3;
			if (line1 + point1)
			{
				cout << "Да, точката лежи на правата. " << endl;
			}
			else
			{
				cout << "Не, не лежи. " << endl;
			}
			cout << "Желаете ли да изберете друга операция? (y / n) " << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label4;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете друг геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		}
	}
	case 4:
	{
		cout << "Моля, въведете координати за точка. " << endl;
		cin >> point1;
		cout << "Моля, въведете координати за точка. " << endl;
		cin >> point2;
		cout << "Моля, въведете координати за точка. " << endl;
		cin >> point3;
		Triangle triangle1(point1, point2, point3);

	Label5: cout << "Моля, изберете операция за обекта: " << endl;
		cout << "1 Определяне на вид на триъгълника " << endl;
		cout << "2 Намиране на лицето на триъгълника " << endl;
		cout << "3 Намиране на периметъра на триъгълника " << endl;
		cout << "4 Определяне на медицентър на триъгълника " << endl;
		cin >> operation;
		switch (operation) {
		case 1: {
			triangle1.type();
			cout << endl << "Желаете ли да изберете нова операция? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете нов геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 2: {
			cout << triangle1.area();
			cout << endl << "Желаете ли да изберете нова операция? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете нов геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 3: {
			cout << triangle1.perimeter();
			cout << endl << "Желаете ли да изберете нова операция? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете нов геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 4: {
			cout << triangle1.centroid(point1, point2, point3);
			cout << endl << "Желаете ли да изберете нова операция? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label5;
			}
			else if (input == 'n')
			{
				cout << "Желаете ли да изберете нов геометричен обект? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "Програмата приключи. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}

		}

	}

	}

	return 0;
}