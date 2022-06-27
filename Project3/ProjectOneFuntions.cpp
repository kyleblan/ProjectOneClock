/*
 * ProjectOneFunctions.cpp
 *
 * Created on:5/29/2022
 * Author: Kyle Blan
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


//Display menu options; User interface
void displayMenu() {
	cout << "**************************\n";
	cout << "* 1-Add One Hour         *\n";
	cout << "* 2-Add One Minute       *\n";
	cout << "* 3-Add One Second       *\n";
	cout << "* 4-Exit Program         *\n";
	cout << "**************************\n";
}
//Display Both Clocks
void displayTime(int& hour12, int& min12, int& sec12, string& ampm, int& hour24,
	int& min24, int& sec24) {
	cout << "************************** **************************\n";
	cout << "* 12-Hour Clock          * * 24-Hour Clock          *\n" << "* ";
	cout << setw(2) << setfill('0') << hour12 << ":";
	cout << setw(2) << setfill('0') << min12 << ":";
	cout << setw(2) << setfill('0') << sec12 << "               " << ampm << "* " << "* ";
	cout << setw(2) << setfill('0') << hour24 << ":";
	cout << setw(2) << setfill('0') << min24 << ":";
	cout << setw(2) << setfill('0') << sec24 << "               " << "*\n";
	cout << "************************** **************************\n";
}

//Function Definitions
void addOneHour(int& hour) {
	hour++;
}
void addOneMin(int& min) {
	min++;
}
void addOneSec(int& sec) {
	sec++;
}