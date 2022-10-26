/**
 * @file Supervisor.h
 * @author Jackson Horton
 * @date 2022-10-25
 * @brief Supervisor class
 * 
 * Supervisor is a subclass of Employee with some methods' implementation overriding Employee's to fit a supervisor. Also has more member variables, like number of people supervised..
 */
#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * Prints out a Supervisor's data
 *
 * @pre Supervisor exists with data
 * @return void 
 * @post Supervisor data written to console
 * 
 */
  void print();

/**
 * Calculates the pay a supervisor should receive
 *
 * @pre Supervisor exists with data
 * @return double Returns the amount the supervisor should be paid; considers num of people supervised
 * @post 
 * 
 */
  double calculatePay();

/**
 * Default constructor
 *
 * @pre 
 * @post Supervisor created
 * 
 */
  Supervisor();

/**
 * Parameterised Constructor
 *
 * @param int ID ID number of supervisor
 * @param int years number of years supervisor has worked
 * @param double hourlyRate the hourly pay rate of supervisor
 * @param float hoursWorked num of hours worked
 * @param int numSupervised number of people supervised by a supervisor
 * @pre 
 * @post Supervisor object created with given data
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
