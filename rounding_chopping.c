/*
    Written by: Farah Al-Karrad
    Title: Rounding and chopping
*/
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	float number, rounding, chopping, normalize;
	int digit;
	cout << " plz inter a float number.\n";
	cin >> number;
	cout << " plz inter a number of digit after the dot point,"
         << " that you want to make rounding and chopping from it.\n"
         << " example: 345.789 enter digit 1 mean (7), enter digit 2 mean (8) and so on.\n";
	cin >> digit;

	normalize = number * pow(10, -1);
	rounding = int((normalize * pow(10, digit)) + 0.5);
	rounding /= pow(10, digit);
	cout << " rounding = " << rounding*10 << endl;

	chopping = int(normalize * pow(10, digit));
	chopping /= pow(10, digit);
	cout << " chopping = " << chopping*10 << endl;

	return 0;

}

