// COSC 2947
// Assignment 3
// Question 9.6
// Amanda Bakalarczyk
// 2017-11-18

#include "stdafx.h"
#include <string>
#include <stdexcept>
#include "Rational.h"
using namespace std;

Rational::Rational(int n , int d) {
	
	numerator = n;
	denominator = d;
	reduce();
}

// adds two rationals, modifying and returning the left operand rational
Rational &Rational::add(const Rational& r) {

	setNumerator((numerator * r.denominator) + (denominator * r.numerator));
	setDenominator(denominator * r.denominator);

	return *this;
	
}

// subtracts two rationals, modifying and returning the left operand rational
Rational &Rational::subtract(const Rational& r) {
	
	setNumerator((r.denominator * numerator) - (r.numerator * denominator));
	setDenominator(r.denominator * denominator);
	
	return *this;
}

// multiplies two rationals, modifying and returning the left operand rational
Rational &Rational::multiply(const Rational& r) {

	setNumerator(numerator * r.numerator);
	setDenominator(denominator * r.denominator);

	return *this;
}

// divides two rationals, modifying and returning the left operand rational
Rational &Rational::divide(const Rational& r) {

	setNumerator(r.denominator * numerator);
	setDenominator(denominator * r.numerator);

	return *this;
}

// Uses gcd. sets numerator and denominator to reduced form.
void Rational::reduce() {

	int k = gcd(numerator, denominator);

	numerator /= k; // numerator > 0 ? numerator / k : -numerator / k;
	denominator /= k; //denominator > 0 ? denominator / k : -denominator / k;
}

// Sets numerator. Converts rational to reduced form
void Rational::setNumerator(int n) {
	numerator = n;
	reduce();
}

// return numerator
int Rational::getNumerator() const {

	return numerator;
}

// Sets denominator. Throws exception if denominator set to zero
// Converts rational to reduced form
void Rational::setDenominator(int d) {
	
	if (d == 0) throw invalid_argument("Denominator must not be zero.");

	denominator = d;
	reduce();
}

int Rational::getDenominator() const {

	return denominator;
}

// To string function returns rational in the form n / d
string Rational::toRationalString() const {

	if (denominator == 1) return to_string(numerator);
	else if (denominator < 0 ^ numerator < 0) return "-" + to_string(abs(numerator)) + "/" + to_string(abs(denominator));
	else  return to_string(abs(numerator)) + "/" + to_string(abs(denominator));
}

// Find greatest common divisor
int Rational::gcd(int m, int n) {

	if (m % n == 0) return n;
	return gcd(n, m % n);
}



