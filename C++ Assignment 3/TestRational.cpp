// COSC 2947
// Assignment 3
// Question 9.6
// Amanda Bakalarczyk
// 2017-11-18

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include "Rational.h"

using namespace std;

int main() {

	// Rational objects
	Rational myRational1; // 1/1
	Rational myRational2(-4, 8); // -4/8

	try {

		// Display initial Rational object values
		cout << "myRational1 = " << myRational1.toRationalString() << endl; // prints 1
		cout << "myRational2 = " << myRational2.toRationalString() << endl; // prints -1/2

		myRational1.setNumerator(10);
		myRational1.setDenominator(8);
		myRational2.setNumerator(8);
		myRational2.setDenominator(5);

		// Display new values of myRational1 and myRational2
		cout << "myRational1 = " << myRational1.toRationalString() << endl;
		cout << "myRational2 = " << myRational2.toRationalString() << endl;

		myRational1.add(myRational2); // demonstrate add

		// Display new value of myRational1
		cout << "myRational1 + myRational2 = " << myRational1.toRationalString() << endl;

		myRational1.subtract(myRational2); // demonstrate subtract

		// Display new value of myRational1
		cout << "myRational1 - myRational2 = " << myRational1.toRationalString() << endl;

		myRational1.multiply(myRational2); // demonstrate multiply

		// Display new value of myRational1
		cout << "myRational1 * myRational2 = " << myRational1.toRationalString() << endl;

		myRational1.divide(myRational2); // demonstrate divide

		// Display new value of myRational1
		cout << "myRational1 / myRational2 = " << myRational1.toRationalString() << endl;
	}

	catch (int e) {
		cout << e;
	}
}

