#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

// Amanda Bakalarczyk
// COSC 2947
// Assignment 4
// Question 13.12 
// 2017-12-05
// Program converts integer fahrenheit temperatures to floating point celcius

using namespace std;

int main() {
	
	double celcius;
	int fahrenheit;

	printf("%-20s%s\n", "Fahrenheit", "Celcius");
	cout << "---------------------------------" << endl;
	// Convert fahrenheit to celcius
	// Print result in right justified columns with 3 digits of precision for celcius
	for (int i = 0; i <= 212; i++) {
		fahrenheit = i;
		celcius = 5.0 / 9.0 * (fahrenheit - 32);
		cout << setw(5) << fahrenheit << setw(21) << setprecision(3) << celcius << endl;
	}
	
}