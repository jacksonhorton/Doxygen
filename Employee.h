/**
 * @file Employee.h
 * @author Jackson Horton
 * @date 2022-10-25
 * @brief Employee class; superclass to supervisor and officer.
 * 
 * Contains all of the information pertaining to to a general employee. Subclasses contain specializations of this class.
 */
#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * The employee class represents an employee and contains member functions to calculate their pay, view their hourly pay rate, etc.
 *
 * @class Employee Employee.h "Doxygen/Employee.h"
 * @brief Employee class 
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:

/**
 * Prints out the member variables and more of an employee
 *
 * @pre Employee exists
 * @return virtual Can be overriden in subclasses
 * @post The employee's information is printed to the console.
 * 
 */
  virtual void print();

/**
 * Calculates and returns the pay they should revieve based on the hours they worked and hourly wage
 *
 * @pre Employee has a hourlyRate and hoursWorked
 * @return virtual Can be overriden by subclasses
 * @return double The payment that should be recieved
 * 
 */
  virtual double calculatePay();

/**
 * Signifies the employee has been working for another year; increases pay and increments years
 *
 * @pre Employee exists with years and hourlyRate
 * @return void 
 * @post hourlyRate is increasted 0.2% and years is incremented.
 * 
 */
  void anniversary();

/**
 * Constructor
 *
 * @post Employee is created
 * 
 */
  Employee();

/**
 * Parameterized constructor
 *
 * @param int ID the employee's ID number
 * @param int years The number of years an employee has worked
 * @param double hourlyRate the wage an employee makes per hour
 * @param float hoursWorked the number of hours worked
 * @pre 
 * @post Employee is created with given parameters
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
