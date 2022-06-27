/*
 * ProjectOneMain.cpp
 *
 * Created on:5/29/2022
 * Author: Kyle Blan
 */

#include <iostream>
#include <iomanip>
#include <string>
#include "Header.h"

using namespace std;

int main() {

	int userInput;

	int hour12 = 0;
	int min12 = 0;
	int sec12 = 0;
	string ampm = "";
	int count = 1;
	int countMin = 1;
	int countSec = 1;

	int hour24 = 0;
	int min24 = 0;
	int sec24 = 0;

	// Initialized Display
	displayTime(hour12, min12, sec12, ampm, hour24, min24, sec24);

	displayMenu();

	// Take first input
	cin >> userInput;

	while (userInput != 4) {
		if (userInput == 1) { // Add One Hour
			if (count <= 11) {
				ampm = "A M";
				addOneHour(hour12);
				addOneHour(hour24);
			}
			else if (count == 12) {
				ampm = "P M";
				hour12 = 12;
				addOneHour(hour24);
			}
			else if (count == 13) {
				ampm = "P M";
				hour12 = 1;
				addOneHour(hour24);
			}
			else if (count > 13 && count < 24) {
				ampm = "P M";
				addOneHour(hour12);
				addOneHour(hour24);
			}
			else {
				hour12 = 0;
				hour24 = 0;
				ampm = "A M";
				break;
			}
		} // End of if when input == 1
		else if (userInput == 2) { // Add One Minute
			if (countMin <= 59) {
				addOneMin(min12);

				addOneMin(min24);
				if (count <= 11) {
					ampm = "A M";
				}
				else {
					ampm = "P M";
				}
			}
			else if (countMin == 60) {
				if (count <= 11) {
					min12 = 0;
					min24 = 0;
					hour12++;
					hour24++;
					ampm = "A M";
				}
				else {
					min12 = 0;
					min24 = 0;
					hour12++;
					hour24++;
					ampm = "P M";
				}
			}
			else if (countMin == 61) {
				if (count <= 11) {
					min12 = 1;
					min24 = 1;
					ampm = "A M";
					countMin = 1;
				}
				else {
					min12 = 1;
					min24 = 1;
					ampm = "P M";
					countMin = 1;
				}
			}
		} // End of else if when input == 2
		else if (userInput == 3) { // Add One Second
			if (countSec <= 59) {
				addOneSec(sec12);
				addOneSec(sec24);
				if (count <= 11) {
					ampm = "A M";
				}
				else {
					ampm = "P M";
				}
			}
			else if (countSec == 60) {
				if (count <= 11) {
					sec12 = 0;
					sec24 = 0;
					min12++;
					min24++;
					ampm = "A M";
				}
				else {
					sec12 = 0;
					sec24 = 0;
					min12++;
					min24++;
					ampm = "P M";
				}
			}
			else if (countSec == 61) {
				if (count <= 11) {
					sec12 = 1;
					sec24 = 1;
					ampm = "A M";
					countSec = 1;
				}
				else {
					sec12 = 1;
					sec24 = 1;
					ampm = "P M";
					countSec = 1;
				}
			}
		} // End of else if when input == 3
		displayMenu(); // display Menu
		cin >> userInput;
		if (userInput == 1) {
			count++;
		}
		else if (userInput == 2) {
			countMin++;
		}
		else if (userInput == 3) {
			countSec++;
		}
		else if (userInput == 4) {
			cout << "Exit Program and Display time.\n";
		}
	} // End of While loop
	displayTime(hour12, min12, sec12, ampm, hour24, min24, sec24);
} // End of main