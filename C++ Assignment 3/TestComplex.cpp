// COSC 2947
// Assignment 3
// Question 10.8
// Amanda Bakalarczyk
// 2017-11-18

#include "stdafx.h"
#include "Complex.h"
#include <iostream>
using namespace std;

int main() {

	// create complex objects
	Complex a;
	Complex b{ 3, 2 };
	Complex c{ 1, 4 };
	Complex d;
	Complex e{ -5, 14 };

	cout << "Enter a value for the complex number 'a' in the form 'a + bi': " << endl;
	cin >> a; // overloaded non-member function '>>' operator takes input in the form 'a + bi'
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << " " << endl;
	cout << "'d' has not been initialized with values. d = " << d << endl;
	cout << " " << endl;

	// demonstrate use of overloaded +, -, and * operators
	cout << "b + a = " << b + a << endl;
	cout << "c - b = " << c - b << endl;
	cout << "b * c = " << b * c << endl;

	d = b * c;
	cout << "d = b * c. The new value of d is " << d << endl;

	// demonstrate use of overloaded comparison operators
	cout << "e = " << e << endl;
	cout << "d == e : " << (d == e) << endl;
	cout << "a != d : " << (a != d) << endl;

    return 0;
}

