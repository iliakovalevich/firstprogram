#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
	setlocale(LC_ALL, "Russian");
	double p, s, a, b, c;
	cout << "Введите значение а: "; cin >> a;
	cout << "Введите значение b: "; cin >> b;
	s = 0.5*(a*b);
	c = sqrt(a*a + b * b);
	p = a + b + c;
	cout << "периметр P=" << p << "площадь s=" << s << endl;

}