#pragma once

#include "myString.h"

class person {
protected:
	myString name;
	int age;
public:
	person();
	person(int, myString);
	~person();
	virtual void display() const;
};