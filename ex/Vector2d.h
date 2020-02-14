#pragma once
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

	~Vector2d();
};

