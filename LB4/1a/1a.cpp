
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double f, x;
	setlocale(LC_ALL, "Russian");
	cout << "Введите значение аргумента x:"; cin >> x;
	f = x * x*x + 2.5*x*x - 1.2;
	cout << "f(" << x<<")="<< f << endl;
	return 0;
}
