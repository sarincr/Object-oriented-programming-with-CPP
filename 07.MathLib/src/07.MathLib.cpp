#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x = 2.3;
	cout << "Sine value of x=2.3 : " << sin(x) << endl;
	cout << "Cosine value of x=2.3 : " << cos(x) << endl;
	cout << "Tangent value of x=2.3 : " << tan(x) << endl;

	double y = 0.25;
	cout << "Square root value of y=0.25 : " << sqrt(y) << endl;

	int z = -10;
	cout << "Absolute value of z=-10 : " << abs(z) << endl;
	cout << "Power value: x^y = (2.3^0.25) : " << pow(x, y) << endl;

	x = 3.0;
	y = 4.0;
	cout << "Hypotenuse having other two sides as x=3.0 and"
		<< " y=4.0 : " << hypot(x, y) << endl;

	x = 4.56;
	cout << "Floor value of x=4.56 is : " << floor(x) << endl;

	x = -4.57;
	cout << "Absolute value of x=-4.57 is : " << fabs(x) << endl;

	x = 1.0;
	cout << "Arc Cosine value of x=1.0 : " << acos(x) << endl;
	cout << "Arc Sine value of x=1.0 : " << asin(x) << endl;
	cout << "Arc Tangent value of x=1.0 : " << atan(x) << endl;

	y = 12.3;
	cout << "Ceiling value of y=12.3 : " << ceil(y) << endl;

	x = 57.3; // in degrees
	cout << "Hyperbolic Cosine of x=57.3 : " << cosh(x) << endl;
	cout << "Hyperbolic tangent of x=57.3 : " << tanh(x) << endl;

	y = 100.0;
	// Natural base with 'e'
	cout << "Log value of y=100.0 is : " << log(y) << endl;

	return 0;
}
