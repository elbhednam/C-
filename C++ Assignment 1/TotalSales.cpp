// 5.17 Calculating Total Sales
// COSC 2947
// Amanda Bakalarczyk

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {

	// Some variables
	bool selling = true;
	int product = 0;
	int sold = 0;
	double total1 = 0;
	double total2 = 0;
	double total3 = 0;
	double total4 = 0;
	double total5 = 0;

	// Sentinel-controlled loop
	while (selling) {

		// i/o for product numbers and items sold
		cout << "Enter the product number or press 0 to exit: \n";
		cin >> product;

		if (product == 0) {
			selling = false; 
			break; // Break out of the loop
		}
		cout << "Enter the quantity sold: \n";
		cin >> sold;

		// Switch statement to determine the retail price for each product
		switch (product) {

		case 1: total1 += 2.98 * sold;
			break;
		case 2: total2 += 4.50 * sold;
			break;
		case 3: total3 += 9.98 * sold;
			break;
		case 4: total4 += 4.49 * sold;
			break;
		case 5:	total5 += 6.87 * sold;
			break;
		default: cout << "Invalid product code\n";
			break;

		}

	}

	// Display results
	cout << "The total retail value of products sold: \n";
	cout << "Product 1:    $" << total1 << "\n";
	cout << "Product 2:    $" << total2 << "\n";
	cout << "Product 3:    $" << total3 << "\n";
	cout << "Product 4:    $" << total4 << "\n";
	cout << "Product 5:    $" << total5 << "\n";

}


