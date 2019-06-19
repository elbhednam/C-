// COSC 2947
// Assignment 3
// Question 10.10
// Amanda Bakalarczyk
// 2017-11-18

#include "stdafx.h"
#include "Rational2.h"
#include <cmath>
#include <string>
using namespace std;

Rational2::Rational2(int n, int d) {
	if (d == 0) throw invalid_argument("Denominator must not be zero.");

	numerator = n;
	denominator = d;

	reduce();
}

// Uses gcd. sets numerator and denominator to reduced form.
void Rational2::reduce() {

	int k = gcd(numerator, denominator);
	numerator = abs(numerator) / k;
	denominator = abs(denominator) / k;

}

void Rational2::setNumerator(int n) {
	numerator = n;
	reduce();
}

void Rational2::setDenominator(int d) {
	denominator = d;
	reduce();
}

int Rational2::getNumerator() const {
	return numerator;
}

int Rational2::getDenominator() const {
	return denominator;
}

// overloaded addition operator
Rational2 Rational2::operator +(const Rational2 &right) {
	Rational2 temp;

	temp.setNumerator((numerator * right.denominator) + (denominator * right.numerator));
	temp.setDenominator(denominator * right.denominator);

	return temp;
}

// overloaded subtraction operator
Rational2 Rational2::operator -(const Rational2 &right) {
	Rational2 temp;

	temp.setNumerator((right.denominator * numerator) - (right.numerator * denominator));
	temp.setDenominator(right.denominator * denominator);

	return temp;
}

// overloaded multiplication operator
Rational2 Rational2::operator *(const Rational2 &right) {
	Rational2 temp;

	temp.setNumerator(numerator * right.numerator);
	temp.setDenominator(denominator * right.denominator);

	return temp;
}

// overloaded division operator
Rational2 Rational2::operator /(const Rational2 &right) {
	Rational2 temp;

	temp.setNumerator(right.denominator * numerator);
	temp.setDenominator(denominator * right.numerator);

	return temp;
}

// overloaded comparison operator, checks if left operand exactly equal to right
bool Rational2::operator ==(const Rational2 &right) const {
	return (numerator == right.numerator && denominator == right.denominator);
}

// overloaded comparison operator, checks if left operand does not equal right
bool Rational2::operator !=(const Rational2 &right) const {
	return !(numerator == right.numerator && denominator == right.denominator);
}

// overloaded comparison operator, checks if double representation of left operand less than right
bool Rational2::operator <(const Rational2 &right) const {
	return (static_cast<double>(*this) < static_cast<double>(right));
}

// overloaded comparison operator, checks if double representation of left operand greater than right
bool Rational2::operator >(const Rational2 &right) const {
	return (static_cast<double>(*this) > static_cast<double>(right));
}

// overloaded comparison operator, checks if double representation of left operand less or equal right
bool Rational2::operator <=(const Rational2 &right) const {
	return (static_cast<double>(*this) <= static_cast<double>(right));
}

// overloaded comparison operator, checks if double representation of left operand greater or equal right
bool Rational2::operator >=(const Rational2 &right) const {
	return (static_cast<double>(*this) >= static_cast<double>(right));
}

// returns representation of rational as double precision floating point
Rational2::operator double() const {
	return (numerator * 1.0) / denominator;
}

// To string function returns rational in the form n / d
Rational2::operator string() const {

	if (denominator == 1) return to_string(numerator);
	else if (denominator < 0 ^ numerator < 0) return "-" + to_string(abs(numerator)) + "/" + to_string(abs(denominator));
	else  return to_string(abs(numerator)) + "/" + to_string(abs(denominator));
}

// Private recursive function finds and returns gcd
int Rational2::gcd(int m, int n) {

	if (m % n == 0) return n;
	return gcd(n, m % n);
}

