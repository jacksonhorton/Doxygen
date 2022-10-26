/**
 * @file Officer.h
 * @author Jackson Horton
 * @date 2022-10-25
 * @brief Officer class; represents an officer
 * 
 * Subclass of Employee. Some member functions are overriden specifically to fit the officer class.
 */
#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 private:
  double evilness;
 public:

/**
 * Print out the officer's data
 *
 * @pre An officer object exists
 * @return void 
 * @post The officer's data is written to the console
 * 
 */
  void print();

/**
 * Calculates the pay of an officer.
 *
 * @pre Officer exists with hourlyRate, evilness and hourseWorked
 * @return double Returns the pay they should receive
 * @post The payment is returned
 * 
 */
  double calculatePay();

/**
 * Default Constructor
 *
 * @pre 
 * @post empty officer object is created
 * 
 */
  Officer();

/**
 * Parameterized Constructor
 *
 * @param int ID ID number of officer
 * @param int years number of years the officer has worked
 * @param double hourlyRate The officer's hourly pay rate
 * @param float hoursWorked the number of hours worked
 * @param double evilness the evilness of the officer; proportional to pay
 * @pre 
 * @post Officer with given parameters created
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
