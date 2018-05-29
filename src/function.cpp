#include <iostream>
#include <cmath>
#include <iomanip>
#include "function.h"

using namespace std;

int i = 0;
unsigned long int result;

bool menu() {
    short menu;

    cout << "1. Addition   2. Computation  3. Multiplication  4. Division" << endl;
    cout << "5. Square root extraction  6. Root of any degree  7. Exponentiation " << endl;
    cout << "8. Percent  9. Factorial  10. Calculating the area of a circle   11. EXIT" << endl;
    cout << endl;	
    cin >> menu;
    cout << endl;

    if (menu == 1) {
    double a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << a << " + " << b << " = " << setprecision(8) << Sum(a,b) << endl; 
    cout << endl;
    }

    else if (menu == 2) {
    double a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << a << " - " << b << " = " << setprecision(8) << Sub(a, b) << endl;
    cout << endl;
    }

    else if (menu == 3) {
    double a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << a << " * " << b << " = " << setprecision(8) << Mul(a, b) << endl;
    cout << endl;
    }

    else if (menu == 4) {
    double a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << a << " / " << b << " = " << setprecision(8) << Div(a, b) << endl;
    cout << endl;
    }

    else if (menu == 5) {
    double a;
    cout << "Enter the number: ";
    cin >> a;
    cout << "sqrt(" << a << ") = " << Sqrt(a) << endl;
    cout << endl;
    }

    else if (menu == 6) {
    double a, b;
    cout << "Enter the number: ";
    cin >> a;
    cout << "The root of which degree one must extract? ";
    cin >> b;
    cout << "Root " << b << " of degree " << a << " is equal to " << Radical(a, b) << endl;
    cout << endl;
    }

    else if (menu == 7) {
    double a, b;
    cout << "Enter the number ";
    cin >> a;
    cout << "Enter the degree: ";
    cin >> b;
    cout << a << "^" << b << " = " << Power(a, b) << endl;
    cout << endl;
    }

    else if (menu == 8) {
    double a, b;
    cout << "Enter the number ";
    cin >> a;
    cout << "Enter percent ";
    cin >> b;
    cout << b << "%" << " ot " << a << " = " << Percent(a, b) << endl;
    cout << endl;
    }

    else if (menu == 9) {
    int n;
    cout << "Enter the number to calculate the factorial: ";
    cin >> n;
    for(int j = 1; j <= n; j++) {
        cout << j << "!" << " = " << fact(j) << endl;
    }
    cout << endl;
    }

    else if (menu == 10) {
    double R;
    cout << "Enter the radius of the circle: ";
    cin >> R;
    cout << "Area of a circle: " << Area_of_circle(R) << endl;
    cout << endl;
    }

    else if (menu == 12) {
	    return true;
    } else {
	    Error();
      }

	return false;
}

void Error() {
    cout <<"Invalid input, try again"<< endl;
}

double Sum(double a, double b) {
    return a + b;
}

double Sub(double a, double b) {
    return a - b;  
}

double Mul(double a, double b) {
    return a * b;   
}

double Div(double a, double b) {
    return a / b;   
}

double Sqrt(double a) {
    return sqrt(a);   
}

double Radical(double a, double b) {
    return pow(a, 1 / b);   
}

double Power(double a, double b) {
    return pow(a, b);   
}

double Percent(double a, double b) {
    return (a * b) / 100;   
}

unsigned long int fact(unsigned long int N) {
    if (N == 1 || N == 0) {
        return 1;
    }
    i++;
    result = N * fact(N - 1);
    return result;
}

double Area_of_circle(double R) {
    return 3.14 * R * R;
}









   
