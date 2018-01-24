#include "stdafx.h"
#include "string.h"
#include "person.h"
#include "myString.h"
#include "expense.h"
#include "employee.h"

employee::employee() {
	salary = 0;
	ID = 0;
}

employee::employee(int temp_salary, int temp_ID, int temp_age, myString temp_myString):person(temp_age, temp_myString), salary(temp_salary), ID(temp_ID) {
}

employee::~employee() {

}

int employee::getCost() const {
	return (salary + ((int)(salary * .0765)));
}

void employee::display() const {
	printf("ID: %i, Salary: %i, Name: %s\n", ID, salary, name.getText());
}



