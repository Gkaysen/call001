#include "stdafx.h"
#include "iostream"
using namespace std;

void swap(int &a, int &b)
{
	cout << " a= " << a << "  b=" << b << endl;
	a = 20;
	b = 30;
	cout << " a= " << a << "  b=" << b << endl;
}


int main()
{
	int x, y;
	x = 100;
	y = 200;
	cout << " x= " << x << "  y=" << y << endl;
	swap(x, y);
	cout << " x= " << x << "  y=" << y << endl;
	return 0;
}