#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double f, x, y;
	cout << "input x:";
	cin >> x ;
	cout<<"input y:";
	cin >> y ;
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	f = ((x + y) / (y + 1)) - (((x*y) - 12) / (34 + x));
	cout << "f="<<f << endl;


}
