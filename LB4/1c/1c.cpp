	#include "pch.h"
	#include <iostream>
	using namespace std;
	int main()
	{
		setlocale(LC_ALL ,"Russian");
		double f,x,y; 
		cin >> x;
		cin >> y;
		f = (x + y) / (y + 1) - (x*y - 12) / (34 + x);
			cout << f << endl;


	}
