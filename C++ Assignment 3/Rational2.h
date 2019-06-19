// COSC 2947
// Assignment 3
// Question 10.10
// Amanda Bakalarczyk
// 2017-11-18

#pragma once
#ifndef RATIONAL2_H
#define RATIONAL2_H
#include <string>

class Rational2 {

public:

	Rational2(int = 1, int = 1);
	void reduce();
	void setNumerator(int);
	void setDenominator(int);
	int getNumerator() const;
	int getDenominator() const;
	Rational2 operator +(const Rational2 &);
	Rational2 operator -(const Rational2 &);
	Rational2 operator *(const Rational2 &);
	Rational2 operator /(const Rational2 &);
	bool operator ==(const Rational2 &) const;
	bool operator !=(const Rational2 &) const;
	bool operator <(const Rational2 &) const;
	bool operator >(const Rational2 &) const;
	bool operator <=(const Rational2 &) const;
	bool operator >=(const Rational2 &) const;
	operator std::string() const;
	operator double() const;

private:

	int numerator;
	int denominator;
	int gcd(int, int);

};
#endif