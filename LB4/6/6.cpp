
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double y,x, a;
	setlocale(LC_ALL,"Russian");
	cout << "введите значение a:"; cin >> a;
	x = a * a;
	y = x * x;
	cout << "результат а^4=" << y << endl;
}