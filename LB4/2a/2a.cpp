#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double f,r a, b, c;
	
	cout << "Введите значение а_"; cin >> a;
	cout << "Введите значение b_"; cin >> b;
	cout << "Введите значение c_"; cin >> c;
	r = (b*b + 4 * a*c);
	if (a == 0 || r < 0)
	cout << "Не верно!";
	else{
		f = (b + sqrt(r)) / ((2 * a) - (a*a*a*c) + (1 / (b*b)));
		cout << "f=" << f << endl;
	};
		
}

