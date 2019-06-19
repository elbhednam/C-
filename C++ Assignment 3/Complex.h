#pragma once
// COSC 2947
// Assignment 3
// Question 10.8
// Amanda Bakalarczyk
// 2017-11-18

#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>

class Complex {

	// overloaded stream insertion and stream extraction operators as friend functions.
	friend std::ostream &operator <<(std::ostream &, const Complex &);
	friend std::istream &operator >>(std::istream &, Complex &);

public:
	explicit Complex(double = 0.0, double = 0.0); // default constructor
	Complex operator +(const Complex &) const; // overloaded +
	Complex operator -(const Complex &) const; // overloaded -
	Complex operator *(const Complex &) const; // overloaded *
	bool operator ==(const Complex &) const; // overloaded ==
	bool operator !=(const Complex &) const; // overloaded !=

private:
	double real;
	double imaginary;
	
};
#endif

