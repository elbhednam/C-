// COSC 2947
// Assignment 3
// Question 10.10
// Amanda Bakalarczyk
// 2017-11-18

#include "stdafx.h"
#include "Rational2.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
	// Rational objects
	Rational2 myRational1; // 1/1
	Rational2 myRational2(-4, 8); // -4/8

	try {

		// Display initial Rational object values
		cout << "myRational1 = " << static_cast<string>(myRational1) << endl; // prints 1
		cout << "myRational2 = " << static_cast<string>(myRational2) << endl; // prints -1/2

		myRational1.setNumerator(10);
		myRational1.setDenominator(8);
		myRational2.setNumerator(8);
		myRational2.setDenominator(5);

		// Display new values of myRational1 and myRational2
		cout << "myRational1 = " << static_cast<string>(myRational1) << endl;
		cout << "myRational2 = " << static_cast<string>(myRational2) << endl; 

		// demonstrate add
		cout << "myRational1 + myRational2 = " << static_cast<string>(myRational1 + myRational2) << endl;
	
		// demonstrate subtract
		cout << "myRational1 - myRational2 = " << static_cast<string>(myRational1 - myRational2) << endl;

		// demonstrate multiply
		cout << "myRational1 * myRational2 = " << static_cast<string>(myRational1 * myRational2) << endl;

		// demonstrate divide
		cout << "myRational1 / myRational2 = " << static_cast<string>(myRational1 / myRational2) << endl;

		// demonstrate ==
		cout << "myRational1 == myRational2 ? " << (myRational1 == myRational2) << endl;

		// demonstrate !=
		cout << "myRational1 != myRational2 ? " << (myRational1 != myRational2) << endl;

		// demonstrate >=
		cout << "myRational1 >= myRational2 ? " << (myRational1 >= myRational2) << endl;

		// demonstrate <=
		cout << "myRational1 <= myRational2 ? " << (myRational1 <= myRational2) << endl;

		// demonstrate >
		cout << "myRational1 > myRational2 ? " << (myRational1 > myRational2) << endl;

		// demonstrate <
		cout << "myRational1 < myRational2 ? " << (myRational1 < myRational2) << endl;


	}

	catch (int e) {
		cout << e;
	}
}



