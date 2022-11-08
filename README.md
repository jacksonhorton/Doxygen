# Doxygen
This repo uses an example class to demonstrate Doxygen and how it helps programmers document our projects using the comments already in our code. This makes documenting our projects faster and more consistent.
This is because we only have to document once and don't risk our comments getting lost in translation between viewing the code and documenting it seperately (because the documentation is generates straight from the code).

# Employee Class
The Employee, Officer, and Supervisor classes is used to store different employees as objects using code.
Employee is the base class, or superclass; Officer and Supervisor are subclasses of Employee.

<img width="50%" alt="inheritance" src="https://user-images.githubusercontent.com/59177560/200465806-9aa526b5-4f96-4dd3-8338-a8bd90bfb793.png">

# Officer Class
The Officer class is a subclass of the Employee class.
Officer overrides Employee::calculatePay() so the object can properly represent an officer.
It has an extra data member, evilness, which is used in the overrided function calculatePay().

# Supervisor Class
The Supervisor class is also a subclass of Employee.
It contains an extra data member for tracking the number of people a supervisor object supervises over.
That data member is also used in its overrid of Employee::calculatePay().
