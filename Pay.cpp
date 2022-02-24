//Pay.cpp
#include "Pay.h"
#include <iostream>
using namespace std;

void Pay::SetFirst(double value)
{
	first = value;
}
void Pay::SetSecond(int value)
{
	second = value;
}
bool Pay::Init(double x, int y)
{
	first = x;
	if (y >= 0)
	{
		second = y;
		return true;
	}
	else
	{
		second = 0;
		return false;
	}
}
void Pay::Display() const
{
	cout << "first = " << first << " second = " << second << endl;
}
void Pay::Read()
{
	double x;
	int y;
	cout << "first = ? ";
	cin >> x;
	do {
		cout << "second = ?";
		cin >> y;
	} while (!Init(x, y));
}
double Pay::summa(int N)
{
	double S;
	S = first / N * second;
	return S;
}