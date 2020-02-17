// ex.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Vector2d.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Vector2d vec(0, 0, 5, 5);
	vec.print();

	Vector2d vec2(2, 6);
	vec2.print();

	cout << endl << "Sum: ";
	Vector2d vec3(5, 4);
	vec2.sum(vec3);
	vec2.print();

	cout << "Sub: ";
	Vector2d vec4(10, 10);
	vec2.sub(vec4);
	vec2.print();

	cout << "Mult: ";
	vec3.mult(10);
	vec3.print();

	cout <<"Scalar mult: "<< vec4.scalarMult(vec2) << endl;

	cout << "Copy: ";
	Vector2d copy(vec4);
	copy.print();

	cout << endl << "a(1,2)" << endl << "b(2,3)";
	cout << endl << "Overloading" << endl << "Sum: ";
	Vector2d a(1, 2);
	Vector2d b(2, 3);
	Vector2d c = a + b;
	c.print();

	cout << "Sub: ";
	c = b - a;
	c.print();

	cout << "Scalar mult: " << a*b << endl << "Mult: ";
	double r = 23.6;
	c = a*r;
	c.print();
	cout << "Mult: ";
	c = r*a;
	c.print();

	cout << "Prefix inc a: ";
	++a;
	a.print();
	cout << "Postfix inc a: ";
	a++;
	a.print();
	cout << "Prefix dec a: ";
	--a;
	a.print();
	cout << "Postfix dec a: ";
	a--;
	a.print();

	cout << endl << "a+=b: ";
	a += b;
	a.print();
	cout << "a-=b: ";
	a -= b;
	a.print();
	cout << "a*=b: ";
	a *= b;
	a.print();

	cout << "a" << (string)a << endl;

	Vector2d a1(1, 2);
	Vector2d b1(2, 3);
	c = a1 + b1;
	cout << endl << "Example:" << endl << "a" << (string)a1 << endl << "b" << (string)b1 << endl;
	cout << "Sum: " << (string)c << endl;
	c = a1 - b1;
	cout << "Sub: " << (string)c << endl;
	c = a1*r;
	cout << "Mult: a * 23.6 " << (string)c << endl;
	cout << "Scalar mult: " << a1*b1 << endl;
	cout << "a length: " << a1.len() << endl;
	cout << "b length: " << b1.len() << endl;
	double cos = a1*b1 / (a1.len()*b1.len());
	cout << "Angle: " << acos(cos) * 180 / 3.14 << endl << endl;

	system("pause");
    return 0;
}

