#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, z, n, y;
	cout << "Введите число x:"; cin >> x;
	y = x / 100; cout << y << endl;
	z = x % 10; cout << z << endl;
	n = (x-y*100)*10+y;
	cout << n;
}