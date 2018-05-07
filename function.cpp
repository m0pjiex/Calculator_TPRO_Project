#include <iostream>
#include <math.h>
#include <iomanip>
#include "Function.h"

using namespace std;


void Error()
{
	cout << "Invalid input, try again" << endl;
}

void Sum()
{
	double a, b;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	cout << a << " + " << b << " = " << setprecision(8) << a + b << endl;
}

void Sub()
{
	double a, b;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	cout << a << " - " << b << " = " << setprecision(8) << a - b << endl;
}

void Mul()
{
	double a, b;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	cout << a << " * " << b << " = " << setprecision(8) << a * b << endl;
}

void Div()
{
	double a, b;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	cout << a << " / " << b << " = " << setprecision(8) << a / b << endl;
}

void Sqrt()
{
	double a;
	cout << "Enter the number: ";
	cin >> a;
	cout << "sqrt(" << a << ") = " << sqrt(a) << endl;
}

void Radical()
{
	double a, b;
	cout << "Enter the number: ";
	cin >> a;
	cout << "The root of which degree one must extract? ";
	cin >> b;
	cout << "Root " << b << " of degree " << a << " is equal to " << pow(a, 1 / b) << endl;
}

void Power()
{
	double a, b;
	cout << "Enter the number ";
	cin >> a;
	cout << "Enter the degree: ";
	cin >> b;
	cout << a << "^" << b << " = " << pow(a, b) << endl;
}
