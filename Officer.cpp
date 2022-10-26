/**
 * @file Officer.cpp
 * @author Jackson Horton
 * @date 2022-10-25
 * @brief Officer implementation
 * 
 * Officer is a subclass of Employee; alsoholds the officer's evilness, which positively affects his pay.
 */
#include "Officer.h"
#include <iostream>

using namespace std;

Officer::Officer() {
  evilness = 500;
}

Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
