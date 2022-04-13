/*
    Written by: Farah Al-karrad
    Title: Newton's method || Newton Raphson method
*/
#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;
int main()
{
	float initialpoint, f_initialpoint = 0, f_derivative = 0, root = 0, error = 0;

	cout << "\n To use Newton-Raphson method you need to enter an initial point.\n\n";
	cout << " For this equation f(x) = x^3 + 4*x^2 - 10\tThe initial point = ";
	cin >> initialpoint;

	// f(x) = x^3 + 4*x^2 - 10
	f_initialpoint = pow(initialpoint, 3) + 4 * pow(initialpoint, 2) - 10;
	f_derivative = 3 * pow(initialpoint, 2) + 8 * initialpoint;

	root = initialpoint - (f_initialpoint / f_derivative);
	error = root - initialpoint;

	int i = 0;
	while ( labs(f_initialpoint) > error) {
		initialpoint = root;
		f_initialpoint = pow(initialpoint, 3) + 4 * pow(initialpoint, 2) - 10;
		f_derivative = 3 * pow(initialpoint, 2) + 8 * initialpoint;
		root = initialpoint - (f_initialpoint / f_derivative);
		error = root - initialpoint;
		i++;
	}
	cout << " root = " << root << endl;

	// f(x) = cos(x)
	cout << "\n For this equation f(x) = cos(x)\tThe initial point = ";
	cin >> initialpoint;

	f_initialpoint = cos(initialpoint);
	f_derivative = -sin(initialpoint);

	root = initialpoint - (f_initialpoint / f_derivative);
	error = root - initialpoint;

	i = 0;
	while (labs(f_initialpoint) > error) {
		initialpoint = root;
		f_initialpoint = cos(initialpoint);
		f_derivative = -sin(initialpoint);
		root = initialpoint - (f_initialpoint / f_derivative);
		error = root - initialpoint;
		i++;
	}
	cout << " root = " << root << endl;

	// f(x) = cos(x)-x
	cout << "\n For this equation f(x) = cos(x)-x\tThe initial point = ";
	cin >> initialpoint;

	f_initialpoint = cos(initialpoint)-initialpoint;
	f_derivative = -sin(initialpoint)-1;

	root = initialpoint - (f_initialpoint / f_derivative);
	error = root - initialpoint;

	 i = 0;
	while (labs(f_initialpoint) > error) {
		initialpoint = root;
		f_initialpoint = cos(initialpoint)-initialpoint;
		f_derivative = -sin(initialpoint)-1;
		root = initialpoint - (f_initialpoint / f_derivative);
		error = root - initialpoint;
		i++;
	}
	cout << " root = " << root << endl;
}

