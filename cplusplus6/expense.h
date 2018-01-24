#pragma once

#include "myString.h"

class expense {
	myString description;
public:
	expense();
	expense(myString);
	~expense();
	virtual int getCost() const = 0;
};