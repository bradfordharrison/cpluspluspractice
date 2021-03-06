// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "C:\Users\Brad\source\repos\cpluspluspractice\cplusplus6\person.h"
#include "C:\Users\Brad\source\repos\cpluspluspractice\cplusplus6\myString.h"
#include "C:\Users\Brad\source\repos\cpluspluspractice\cplusplus6\expense.h"
#include "C:\Users\Brad\source\repos\cpluspluspractice\cplusplus6\employee.h"
#include "C:\Users\Brad\source\repos\cpluspluspractice\cplusplus6\purchaseOrder.h"

void displayObject(person temp_person) {
	temp_person.display();
}

void displayObject(employee temp_employee) {
	temp_employee.display();
}

int main() {
	purchaseOrder stapler(1, 15, "stapler");
	purchaseOrder scissors(2, 10, "scissors");
	purchaseOrder pencils(3, 5, "pencils");

	person bill(24, "Bill");
	person david(37, "David");

	employee lackey(1000, 1, 32, "Fred");
	employee cronie(1100, 2, 40, "Jim");

	expense **costfunction = new expense* [5];
	int totalCost = 0;

	costfunction[0] = &stapler;
	costfunction[1] = &scissors;
	costfunction[2] = &pencils;
	costfunction[3] = &lackey;
	costfunction[4] = &cronie;

	for (int i = 0; i < 5; i++) {
		totalCost = totalCost + (costfunction[i]->getCost());
	}

	printf("Total cost of 'expense' objects: %d\n", totalCost);

	displayObject(bill);
	displayObject(david);
	displayObject(lackey);
	displayObject(cronie);
}