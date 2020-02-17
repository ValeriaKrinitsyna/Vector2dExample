#pragma once
#include <iostream>
using namespace std;

class Vector2d
{
private: 
	double x, y;

public:
	Vector2d() { x = 0; y = 0; }
	Vector2d(double, double); // создание вектора с заданными координатами
	Vector2d(double, double, double, double); //создание вектора по двум точкам – координаты конца и начала вектора
	Vector2d(const Vector2d &);

	void print();

	void setx(double value) { x = value; }
	double getx() { return x; }
	void sety(double value) { y = value; }
	double gety() { return y; }

	void sum(Vector2d);
	void sub(Vector2d);
	void mult(double);
	double scalarMult(Vector2d);

	Vector2d Vector2d::operator+(const Vector2d & vector) const;
	Vector2d Vector2d::operator-(const Vector2d & vector) const;
	double Vector2d::operator*(const Vector2d & vector) const;
	Vector2d Vector2d::operator*(double) const;

	friend Vector2d operator*(double, Vector2d&);

	Vector2d& operator++();
	Vector2d operator++(int);
	Vector2d& operator--();
	Vector2d operator--(int);

	const Vector2d& operator += (const Vector2d &);
	const Vector2d& operator -= (const Vector2d &);
	const Vector2d& operator *= (const Vector2d &);

	operator string();
	double len();

	~Vector2d();
};

