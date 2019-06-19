// 2.19 Arithmetic, smallest to largest
// COSC 2947
// Amanda Bakalarczyk

#include "stdafx.h"
#include <iostream>

int main() {
	// Variables
	int num1;
	int num2;
	int num3;
	int largest;
	int count = 0;

	// Input three integers
	std::cout << "Enter first integer: \n";
	std::cin >> num1;
	std::cout << "Enter second integer: \n";
	std::cin >> num2;
	std::cout << "Enter the third integer: \n";
	std::cin >> num3;

	// Check to see which integer is the largest, store result
	if (num1 > num2 && num1 > num3) {
		largest = num1;
	}

	else if (num2 > num1 && num2 > num3) {
		largest = num2;
	}
	
	else {
		largest = num3;
	}

	// Calculate sum, average, and product
	int sum = num1 + num2 + num3;
	int avg = sum / 3;
	int prod = num1 * num2 * num3;

	// Display results
	std::cout << "The sum is " << sum << 
		"\nThe average is " << avg << 
		"\nThe product is " << prod << 
		"\nThe largest is " << largest << std::endl;


	return 0;
}

