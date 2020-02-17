#include "stdafx.h"
#include "Vector2d.h"
#include <iostream>
#include <string>
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

Vector2d Vector2d::operator+(const Vector2d & vector) const
{
	return Vector2d(x + vector.x, y + vector.y);
}

void Vector2d::sub(Vector2d vector)
{
	x = x - vector.x;
	y = y - vector.y;
}

Vector2d Vector2d::operator-(const Vector2d & vector) const
{
	return Vector2d(x - vector.x, y - vector.y);
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

double Vector2d::operator*(const Vector2d & vector) const
{
	return (x*vector.x + y*vector.y);
}

Vector2d Vector2d::operator*(double a) const
{
	return Vector2d(x*a,y*a);
}

Vector2d::Vector2d(const Vector2d & vector)
{
	this->x = vector.x;
	this->y = vector.y;
}

Vector2d operator*(double realNumber, Vector2d& vector)
{
	return vector*realNumber;
}

Vector2d& Vector2d::operator++() 
{
	x++;
	y++;
	return *this;
}

Vector2d Vector2d::operator++(int)
{
	Vector2d temp(x, y);
	x++;
	y++;
	return temp;
}

Vector2d& Vector2d::operator--()
{
	x--;
	y--;
	return *this;
}

Vector2d Vector2d::operator--(int)
{
	Vector2d temp(x, y);
	x--;
	y--;
	return temp;
}

const Vector2d& Vector2d::operator+= (const Vector2d & vector) 
{
	x += vector.x;
	y += vector.y;
	return *this;
}

const Vector2d& Vector2d::operator-= (const Vector2d & vector)
{
	x -= vector.x;
	y -= vector.y;
	return *this;
}

const Vector2d& Vector2d::operator*= (const Vector2d & vector)
{
	x *= vector.x;
	y *= vector.y;
	return *this;
}

Vector2d::operator string()
{
	string s = "(" + to_string(x) + ";" + to_string(y) + ")";
	return s;
}

double Vector2d::len()
{
	return sqrt(x*x + y*y);
}

Vector2d::~Vector2d()
{
}
