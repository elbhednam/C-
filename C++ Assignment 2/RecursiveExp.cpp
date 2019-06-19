// Amanda Bakalarczyk
// COSC 2947
// Assignment 2
// Question 2: 6.36

#include "stdafx.h"
#include <iostream>
using namespace std;

int exp(int, int);

int main() {

	int m;
	int n;
	cout << "Enter an integer for the base: ";
	cin >> m; // input for base
	cout << endl << "Enter an integr for the exponent: ";
	cin >> n; // input for exponent
	
	// call function, show output
	cout << endl << exp(m, n) << endl;
}

int exp(int m, int n) {

	// terminate when exponent = 1
	if (n == 1) return m;

	// recursively multiply m by itself until n reaches 1
	return m * exp(m, n - 1);

}