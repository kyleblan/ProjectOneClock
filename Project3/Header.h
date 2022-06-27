/*
 * Header.h
 *
 * Created on:5/29/2022
 * Author: Kyle Blan
 */
#ifndef HEADER_H_
#define HEADER_H_
#include <iostream>
#include <iomanip>
#include <string>

 //Declarations
void displayMenu();
void displayTime(int& hour12, int& min12, int& sec12, std::string& ampm, int
	& hour24, int& min24, int& sec24);
void addOneHour(int& hour);
void addOneMin(int& min);
void addOneSec(int& sec);
#endif /* HEADER_H_ */#pragma once
