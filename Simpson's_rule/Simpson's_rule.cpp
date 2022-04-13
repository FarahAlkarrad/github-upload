/*
    Written by: Farah Al-karrad
    Title: Numerical Integration - Simpson's Rule
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float firstpoint, secondpoint, h, midpoint, integration, f_firstpoint, f_secondpoint, f_midpoint;

	cout << "\n To find integration using simpson's rule \n plz enter first point and second point you want to start and end with it. \n\n";
	cout << " First Point = ";
	cin >> firstpoint;
	cout << " Second Point = ";
	cin >> secondpoint;

	//First calculate h
	h = (secondpoint - firstpoint) / 2;

	//Simpson's rule integration --> f(x)= h/3 [ f(firstpoint) + 4 f(midpoint) + f(secondpoint) ]
	midpoint = (firstpoint + secondpoint) / 2;

	// f(x) = x^2
	f_firstpoint = pow(firstpoint, 2);
	f_secondpoint = pow(secondpoint, 2);
	f_midpoint = pow(midpoint, 2);

	integration = (h / 3) * (f_firstpoint + 4 * f_midpoint + f_secondpoint);

	cout << "\n Integration of x^2 = " << integration << endl;

	// f(x) = x^4
	f_firstpoint = pow(firstpoint, 4);
	f_secondpoint = pow(secondpoint, 4);
	f_midpoint = pow(midpoint, 4);

	integration = 0;
	integration = (h / 3) * (f_firstpoint + 4 * f_midpoint + f_secondpoint);

	cout << "\n Integration of x^4 = " << integration << endl;

	// f(x) = 1/(x+1)
	f_firstpoint = pow((firstpoint+1), -1);
	f_secondpoint = pow((secondpoint + 1), -1);
	f_midpoint = pow((midpoint + 1), -1);

	integration = 0;
	integration = (h / 3) * (f_firstpoint + 4 * f_midpoint + f_secondpoint);

	cout << "\n Integration of 1/(x+1) = " << integration << endl;

	// f(x) = √‾(1+x^2)
	f_firstpoint = sqrt(1 + pow(firstpoint, 2));
	f_secondpoint = sqrt(1 + pow(secondpoint, 2));
	f_midpoint = sqrt(1 + pow(midpoint, 2));

	integration = 0;
	integration = (h / 3) * (f_firstpoint + 4 * f_midpoint + f_secondpoint);

	cout << "\n Integration of sqrt(1+x^2) = " << integration << endl;

	// f(x) = sin(x)
	f_firstpoint = sin(firstpoint);
	f_secondpoint = sin(secondpoint);
	f_midpoint = sin(midpoint);

	integration = 0;
	integration = (h / 3) * (f_firstpoint + 4 * f_midpoint + f_secondpoint);

	cout << "\n Integration of sin(x) = " << integration << endl;

	// f(x) = e^x
	f_firstpoint = exp(firstpoint);
	f_secondpoint = exp(secondpoint);
	f_midpoint = exp(midpoint);

	integration = 0;
	integration = (h / 3) * (f_firstpoint + 4 * f_midpoint + f_secondpoint);

	cout << "\n Integration of e^x = " << integration << endl;
	
	return 0;
}


