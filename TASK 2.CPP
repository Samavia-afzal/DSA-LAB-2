#include <iostream>
#include <string>
using namespace std;
class Employee {
public:
	virtual double calculateSalary() = 0;
	virtual ~Employee() {} 
};

class FullTimeEmployee : public Employee {
private:
	double fixedSalary;

public:
	FullTimeEmployee(double salary) : fixedSalary(salary) {}

	double calculateSalary() {
		return fixedSalary; 
	}
};

class PartTimeEmployee : public Employee {
private:
	double hourlyRate;
	double hoursWorked;

public:
	PartTimeEmployee(double rate, double hours) : hourlyRate(rate), hoursWorked(hours) {}

	double calculateSalary() {
		return hourlyRate * hoursWorked;
	}
};

int main() {
	
	FullTimeEmployee fullTimeEmployee(50000);

	PartTimeEmployee partTimeEmployee(20, 30);

	cout << "Full-Time Employee Salary: $" << fullTimeEmployee.calculateSalary() <<endl;
	cout << "Part-Time Employee Salary: $" << partTimeEmployee.calculateSalary() << endl;

	return 0;
}
