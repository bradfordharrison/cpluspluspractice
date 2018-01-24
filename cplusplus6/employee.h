#pragma once
#include "expense.h"
#include "person.h"
#include "myString.h"

class employee : public expense, public person {
	int salary;
	int ID;
public:
	employee();
	employee(int, int, int, myString);
	~employee();
	virtual int getCost() const;
	virtual void display() const;
};