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

Label1: cout << "����, �������� ��� ����������� �����: " << endl;
	cout << "1 ����� " << endl;
	cout << "2 ������ " << endl;
	cout << "3 ����� " << endl;
	cout << "4 ���������� " << endl;
	cin >> figure;
	switch (figure)
	{
	case 1: {
		cout << "����, �������� ���������� �� �������: " << endl;
		cin >> point1;
	Label2:		cout << "����, �������� �������� �� ������: " << endl;
		cout << "1 ����������� ���� ��� ����� �������� " << endl;
		cin >> operation;
		switch (operation) {
		case 1: {
			cin >> point2;
			if (point1 == point2)
			{
				cout << "������� ��������. " << endl;
			}
			else
			{
				cout << "������� �� ��������. " << endl;
			}
			cout << "������� �� �� ���������� �� ����� � ����� ����������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label2;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ��� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		}
	}

	case 2: {
		cout << "����, �������� ������: " << endl;
		cin >> vector1;

	Label3: cout << "����, �������� �������� �� ������: " << endl;
		cout << "1 ����������� �� ������� �� ������ " << endl;
		cout << "2 ����������� �� �������� �� ������ " << endl;
		cout << "3 �������� �� ������ ����� ���� ������ " << endl;
		cout << "4 �������� �� ����� ������ " << endl;
		cout << "5 �������� �� ����������� �� ��� ������� " << endl;
		cout << "6 �������� �� ����������������� �� ��� ������� " << endl;
		cout << "7 �������� �� ��� ������� " << endl;
		cout << "8 ��������� �� ������ � ������ ����� " << endl;
		cout << "9 �������� ������������ �� ��� ������� " << endl;
		cout << "10 �������� ������������ �� ��� ������� " << endl;
		cout << "11 �������� (�������) ������������ �� ��� ������� " << endl;
		cin >> operation;
		switch (operation) {
		case 1: {
			cout << "��������� �� ������� �: " << vector1.lengthOfVector() << endl;
			cout << "������� �� �� �������� ���� ��������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ��� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 2: {

			cout << "�������� �� ������� �: " << vector1.direction() << endl;
			cout << "������� �� �� �������� ���� ��������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ��� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 3: {
			cout << "�������� ���������� �� ����� ������: " << endl;
			cin >> vector2;
			cout << "���������� �: " << vector1.projection(vector2) << endl;
			cout << "������� �� �� �������� ���� ��������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ��� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 4: {
			if (vector1.zeroVector())
			{
				cout << "��, ����� ������ �. " << endl;
			}
			else
			{
				cout << "��, �� � ����� ������. " << endl;
			}
			cout << "������� �� �� �������� ���� ��������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ��� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'ny')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 5:
		{
			cout << "�������� ���������� �� ����� ������: " << endl;
			cin >> vector2;
			if (vector1.parallelism(vector2))
			{
				cout << "��, ��������� ��. " << endl;
			}
			else
			{
				cout << "��, �� �� ���������. " << endl;
			}

			cout << "������� �� �� �������� ���� ��������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ��� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 6: {
			cout << "�������� ���������� �� ����� ������: " << endl;
			cin >> vector2;
			if (vector1.perpendicularity(vector2))
			{
				cout << "��, ��������������� ��. " << endl;
			}
			else
			{
				cout << "��, �� �� ���������������. " << endl;
			}

			cout << "������� �� �� �������� ���� ��������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ��� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 7: {
			cout << "�������� ���������� �� ����� ������: " << endl;
			cin >> vector2;
			cout << vector1 + vector2 << endl;
			cout << "������� �� �� �������� ���� ��������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ��� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 8: {
			cout << "����, �������� ������ �����: " << endl;
			cin >> realNum;
			cout << vector1 * realNum << endl;
			cout << "������� �� �� �������� ���� ��������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ��� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 9: {
			cout << "����, �������� ���������� �� ����� ������: " << endl;
			cin >> vector2;
			cout << vector1 * vector2 << endl;
			cout << "������� �� �� �������� ���� ��������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ��� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 10: {
			cout << "����, �������� ���������� �� ����� ������: " << endl;
			cin >> vector2;
			vector3 = vector1 ^ vector2;
			cout << vector3 << endl;
			cout << "������� �� �� �������� ���� ��������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ��� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 11: {
			cout << "����, �������� ���������� �� ����� ������: " << endl;
			cin >> vector2;
			cout << "����, �������� ���������� �� ����� ������: " << endl;
			cin >> vector3;
			cout << vector1(vector2, vector3) << endl;
			cout << "������� �� �� �������� ���� ��������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ��� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
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
		cout << "����, �������� ���������� �� �����: " << endl;
		cin >> point1;
		cout << "����, �������� ���������� �� �����: " << endl;
		cin >> point2;
		Line line1(point1, point2);
	Label4: cout << "�������� �������� �� ������: " << endl;
		cout << "1 �������� �� ������ �� ������� " << endl;
		cout << "2 �������� �� �������� ������ " << endl;
		cout << "3 ���� ����� ���� �� ������ ����� " << endl;
		cin >> operation;
		switch (operation)
		{
		case 1: {
			cout << "������ �� �������: " << endl;
			cout << line1.direction();
			cout << "������� �� �� �������� ����� ��������? (y / n) " << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label4;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ���� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 2: {
			cout << "�������� ������: " << endl;
			cout << line1.normal();
			cout << "������� �� �� �������� ����� ��������? (y / n) " << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label4;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ���� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 3: {
			cout << "�������� ���������� �� �����: " << endl;
			cin >> point3;
			if (line1 + point1)
			{
				cout << "��, ������� ���� �� �������. " << endl;
			}
			else
			{
				cout << "��, �� ����. " << endl;
			}
			cout << "������� �� �� �������� ����� ��������? (y / n) " << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label4;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ���� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		}
	}
	case 4:
	{
		cout << "����, �������� ���������� �� �����. " << endl;
		cin >> point1;
		cout << "����, �������� ���������� �� �����. " << endl;
		cin >> point2;
		cout << "����, �������� ���������� �� �����. " << endl;
		cin >> point3;
		Triangle triangle1(point1, point2, point3);

	Label5: cout << "����, �������� �������� �� ������: " << endl;
		cout << "1 ���������� �� ��� �� ����������� " << endl;
		cout << "2 �������� �� ������ �� ����������� " << endl;
		cout << "3 �������� �� ���������� �� ����������� " << endl;
		cout << "4 ���������� �� ���������� �� ����������� " << endl;
		cin >> operation;
		switch (operation) {
		case 1: {
			triangle1.type();
			cout << endl << "������� �� �� �������� ���� ��������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ��� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 2: {
			cout << triangle1.area();
			cout << endl << "������� �� �� �������� ���� ��������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ��� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 3: {
			cout << triangle1.perimeter();
			cout << endl << "������� �� �� �������� ���� ��������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label3;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ��� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
					return 0;
				}
			}
			break;
		}
		case 4: {
			cout << triangle1.centroid(point1, point2, point3);
			cout << endl << "������� �� �� �������� ���� ��������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				goto Label5;
			}
			else if (input == 'n')
			{
				cout << "������� �� �� �������� ��� ����������� �����? (y / n)" << endl;
				cin >> input;
				if (input == 'y')
				{
					goto Label1;
				}
				else if (input == 'n')
				{
					cout << "���������� ��������. Hope you've enjoyed it. :)" << endl;
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