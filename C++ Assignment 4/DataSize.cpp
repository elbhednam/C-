#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream> 
#include <cstdlib>

// Amanda Bakalarczyk
// COSC 2947
// Assignment 4
// Question 14.3 
// 2017-12-05
// Program uses sizeof operator to determine the size of data types
// Writes results to a file
// Reads and prints results from same file
using namespace std;

int main() {

	// ofstream constructor opens file
	ofstream outDataSizeFile("data-size.dat", ios::out);

	// exit program if unable to create file
	if (!outDataSizeFile) {
		cerr << "File could not be opened" << endl;
		exit(1);
	}

	// use sizeof operator to determine the size of various data types
	// write name of data type and size of data type to .dat file
	outDataSizeFile << "char" << setw(26) << sizeof(char) << endl;
	outDataSizeFile << "unsigned char" << setw(17) << sizeof(unsigned char) << endl;
	outDataSizeFile << "short int" << setw(21) << sizeof(short int) << endl;
	outDataSizeFile << "unsigned short int" << setw(12) << sizeof(unsigned short int) << endl;
	outDataSizeFile << "int" << setw(27) << sizeof(int) << endl;
	outDataSizeFile << "unsigned int" << setw(18) << sizeof(unsigned int) << endl;
	outDataSizeFile << "long int" << setw(22) << sizeof(long int) << endl;
	outDataSizeFile << "unsigned long int" << setw(13) << sizeof(unsigned long int) << endl;
	outDataSizeFile << "float" << setw(25) << sizeof(float) << endl;
	outDataSizeFile << "double" << setw(24) << sizeof(double) << endl;
	outDataSizeFile << "long double" << setw(19) << sizeof(long double) << endl;


	// ifstream constructor opens file
	ifstream inDataSizeFile("data-size.dat", ios::in);

	// exit program if unable to open file
	if (!outDataSizeFile) {
		cerr << "File could not be opened" << endl;
		exit(1);
	}

	string data;

	// display each record in file
	while (inDataSizeFile) {
		// read data from file
		getline(inDataSizeFile, data);
		// print result
		cout << data << endl;
	}
}

