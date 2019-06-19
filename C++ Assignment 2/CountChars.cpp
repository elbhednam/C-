// Amanda Bakalarczyk
// COSC 2947
// Assignment 2
// Question 4

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int count(char *, char);

int main() {

	char s[100];
	char a;

	// Take input
	cout << "Enter a string: ";
	cin >> s;
	cout << endl << "Enter a character: ";
	cin >> a;

	// Call function, display result
	cout << endl << a << " occurs in the string " << count(s, a) << " time(s)." << endl;

}

// Function counts the number of occurrences of a specified character in a string
static int count(char *s, char a) {
	int n = 0;

	while (*s != '\0') { // End loop at null character
		
		// Increment n if the character at *s matches a, case insensitive
		if (toupper(*s) == toupper(a)) n++;

		*s++; // Point to the next character in the string
	}

	return n;
}
