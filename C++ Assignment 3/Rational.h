// COSC 2947
// Assignment 3
// Question 9.6
// Amanda Bakalarczyk
// 2017-11-18

#pragma once
#include <string>
#ifndef RATIONAL_H
#define RATIONAL_H
using namespace std;
class Rational {

public:

	Rational();
	Rational(int, int);
	void reduce();
	Rational &add(const Rational&);
	Rational &subtract(const Rational&);
	Rational &multiply(const Rational&);
	Rational &divide(const Rational&);
	Rational &setNumerator(int);
	Rational &setDenominator(int);
	string toRationalString() const;
	double &toDouble(const Rational&);
	int getNumerator() const;
	int getDenominator() const;

private:

	int numerator;
	int denominator;
	int gcd(int, int);
	
};
#endif
