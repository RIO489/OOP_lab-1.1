//main.cpp
#include<iostream>
#include "Pay.h"
using namespace std;

Pay makePay(double x, int y)
{
	Pay nn;
	if (!nn.Init(x, y))
		cout << "wrong argument to Init (second)" << endl;
	return nn;
}
int main()
{

	Pay i;
	double a;
	int b;
	int c;
	cout << "first = ? ";
	cin >> a;
	cout << "second = ?";
	cin >> b;
	cout << "N = ?";
	cin >> c;
	i = makePay(a, b);
	cout << "summa = " << i.summa(c) << endl;;
	i.Display();

	return 0;
}