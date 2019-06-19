// 4.15 Sales Commission Calculator
// COSC 2947
// Amanda Bakalarczyk
#include "stdafx.h"
#include <iostream>

int main() {

	int sales = 0;

	// While loop to input weekly gross sales
	while (sales != -1) {

		std::cout << "Enter sales in dollars (-1 to end): ";
		std::cin >> sales;
		if (sales == -1) break;
		double base = 200.00;

		// Calculate and display earnings
		std::cout << "Salary is: $" << base + sales * 0.09 << "\n";
		continue;
	}

	return 0;
}

