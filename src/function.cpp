#include <iostream>
#include <math.h>
#include <iomanip>
#include "function.h"

using namespace std;


bool ShowMenu()
{
	short menu;

	cout << "1. Addition   2. Computation  3. Multiplication  4. Division" << endl;
	cout << "5. Square root extraction  6. Root of any degree  7. Exponentiation " << endl;
	
	cin >> menu;
	if (menu == 1)
		Sum();
	else if (menu == 2)
		Sub();
	else if (menu == 3)
		Mul();
	else if (menu == 4)
		Div();
	else if (menu == 5)
		Sqrt();
	else if (menu == 6)
		Radical();
	else if (menu == 7)
		Power();
	else if (menu == 8)
		Percent();
	else if (menu == 9)
		return true;
	else
		Error();

	return false;
}

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

void Percent() {
	double a, b;
	cout << "Enter the number ";
	cin >> a;
	cout << "Enter percent ";
	cin >> b;
	cout << "%" << b << " ot " << a << " = " << (a * b) / 100 << endl;
}
