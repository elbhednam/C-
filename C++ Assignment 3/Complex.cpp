// COSC 2947
// Assignment 3
// Question 10.8
// Amanda Bakalarczyk
// 2017-11-18

#include "stdafx.h"
#include <iomanip>
#include "Complex.h"
using namespace std;

Complex::Complex(double r, double i) {
	real = r;
	imaginary = i;
}

// overloaded addition operator enables addition of two complex numbers
// returns new complex, does not modify original
Complex Complex::operator +(const Complex &right) const {
	return Complex{ real + right.real, imaginary + right.imaginary };
}

// overloaded subtraction operator enables subtraction of two complex numbers
// returns new complex, does not modify original
Complex Complex::operator -(const Complex &right) const {
	return Complex{ real - right.real, imaginary - right.imaginary };
}

// overloaded multiplication operator enables multiplication of two complex numbers
// returns new complex, does not modify original
Complex Complex::operator *(const Complex &right) const {
	return Complex{ real * right.real - imaginary * right.imaginary, real * right.imaginary + imaginary * right.real };
}

// overloaded comparison operator, returns boolean
bool Complex::operator ==(const Complex &right) const {
	return real == right.real && imaginary == right.imaginary;
}

// overloaded comparison operator, returns boolean
bool Complex::operator !=(const Complex &right) const {
	return !(real == right.real && imaginary == right.imaginary);
}

// overloaded stream insertion operator;
ostream &operator <<(ostream &output, const Complex &c) {
	if (c.imaginary >= 0) output << c.real << " + " << c.imaginary << "i";
	else output << c.real << " - " << -(c.imaginary) << "i";
	
	return output;
}

// overloaded stream extraction operator;
istream &operator >>(istream &input, Complex &c) {
	input >> c.real;
	input.ignore(3); // ignore " + " or " - "
	input >> c.imaginary;
	input.ignore(); // ignore "i"
	
	return input;
}








