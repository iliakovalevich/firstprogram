#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int f, x;
	cout << "input x:";
	cin >> x;
	f = 22 / x + 22 % x;
	cout << "f=" << f << endl;


}
