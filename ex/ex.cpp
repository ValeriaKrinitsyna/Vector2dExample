// ex.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Vector2d.h"
#include <iostream>
using namespace std;

int main()
{
	Vector2d vec(0, 0, 5, 5);
	vec.print();

	Vector2d vec2(2, 6);
	vec2.print();

	Vector2d vec3(5, 4);
	vec2.sum(vec3);
	vec2.print();

	Vector2d vec4(10, 10);
	vec2.sub(vec4);
	vec2.print();

	vec3.mult(10);
	vec3.print();

	cout << vec4.scalarMult(vec2) << endl;

	Vector2d copy(vec4);
	copy.print();

	system("pause");
    return 0;
}

