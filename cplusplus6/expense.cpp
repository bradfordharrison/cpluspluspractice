#include "stdafx.h"
#include "string.h"
#include "myString.h"
#include "expense.h"

expense::expense() {
}

expense::expense(myString temp_myString):description(temp_myString) {
}

expense::~expense() {
}