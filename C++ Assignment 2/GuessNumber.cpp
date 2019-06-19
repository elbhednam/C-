// Amanda Bakalarczyk
// COSC 2947
// Assignment 2
// Question 1: 6.34

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	
	bool yes = true;

	while (yes) {

		int n = rand() % 1000 + 1; // Random number between 1 and 1000
		srand(n); // Seed random number generator
		int m;

		cout << "  " << endl;
		cout << "I have a number between 1 and 1000\nCan you guess my number?\nPlease type your first guess:\r\n" << endl;
		cin >> m; // Take input for number guess
		
		// Continue while guesses are incorrect
		while (m != n) {

			if (m < n) {
				cout << "Too low. Try again." << endl;
				cin >> m;
			}

			if (m > n) {
				cout << "Too high. Try again." << endl;
				cin >> m;
			}
		}

		string s;
		cout << "Excellent! You guessed the number.\nWould you like to play again? (y or n) ? ";
		cin >> s;

		if (tolower(s.compare("y")) == 0) continue; // Run again if 'y'
		else if (tolower(s.compare("n")) == 0) break; // Break if 'n'
		else break; // break if typo
	}

	yes = false; // change loop condition to false, end program
}
