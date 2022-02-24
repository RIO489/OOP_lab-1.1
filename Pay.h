//Pay.h
#pragma once

class Pay
{
private:
	double first;
	int second;
public:
	double GetFirst() const { return first; }
	int GetSecond() const { return second; }
	void SetFirst(double value);
	void SetSecond(int value);

	bool Init(double x, int y);
	void Display() const;
	void Read();

	double summa(int N);
};
