#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	double x,y,b,z1, z2;
	cout << "Введите b: "; cin >> b;
	x = sqrt(2 * b + 2 * (sqrt(b*b - 4)));
	y = b * b - 4;
	if (x<0||y<0)
		cout<<"неверно!";
	else {
		    z1 = x / y;
			z2 = (1 / (sqrt(b + 2)));
			cout << "z1=" << z1 << endl << "z2=" << z2 << endl;
	}



}