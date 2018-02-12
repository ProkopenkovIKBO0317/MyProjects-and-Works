#include "calculator.h"
#include "stdafx.h"
#include "iostream"
using namespace std;

void printresult(double r)
{
	cout << " " << r;
}

double add(double a, double b)
{
	return a + b;
}

double multiply(double a, double b)
{
	return a * b;
}

double substract(double a, double b)
{
	return a - b;
}

double divide(double a, double b)
{
	if (b != 0)
	{
		return a / b;
	}
}
