#include "stdafx.h"
#include "Vector2d.h"
#include <iostream>
using namespace std;

Vector2d::Vector2d(double X, double Y)
{
	x = X;
	y = Y;
}

Vector2d::Vector2d(double x1, double y1, double x2, double y2)
{
	x = x2 - x1;
	y = y2 - y1;
}

void Vector2d::print()
{
	cout << x << " " << y << endl;
}

void Vector2d::sum(Vector2d vector)
{
	x = x + vector.x;
	y = y + vector.y;
}

void Vector2d::sub(Vector2d vector)
{
	x = x - vector.x;
	y = y - vector.y;
}

void Vector2d::mult(double a)
{
	x = x*a;
	y = y*a;
}

double Vector2d::scalarMult(Vector2d vector)
{
	return x*vector.x + y*vector.y;
}

Vector2d::Vector2d(const Vector2d & vector)
{
	this->x = vector.x;
	this->y = vector.y;
}

Vector2d::~Vector2d()
{
}
