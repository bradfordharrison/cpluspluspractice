#include "stdafx.h"
#include "string.h"
#include "person.h"
#include "myString.h"

person::person() {
	age = 0;
}

person::person(int temp_age, myString temp_myString):age(temp_age), name(temp_myString) {
}

person::~person() {

}

void person::display() const {
	printf("Age: %i\n", age);
}