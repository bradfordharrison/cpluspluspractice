#include "stdafx.h"
#include "string.h"
#include "myString.h"

myString::myString() {
	text = new char[2];
	strcpy_s(text, 2, "");
	length = 0;
}

myString::myString(const char *temp_text) {
	length = strlen(temp_text);
	text = new char[strlen(temp_text) + 1];
	strcpy_s(text, 10, temp_text);
}

myString::myString(const myString &temp_myString) {
	length = temp_myString.length;
	text = new char[length + 1];
	strcpy_s(text, 10, temp_myString.text);
}

myString::~myString() {
	delete [] text;
}

void myString::set(const char *temp_text) {
	char *empty_string = new char[2];
	strcpy_s(empty_string, 2, "");
	if (*text != *empty_string) delete [] text;
	text = new char[strlen(temp_text) + 1];
	strcpy_s(text, 100, temp_text);
}

void myString::display() const {
	printf("Text: %s\n", text);
}

int myString::getLength() const {
	return length;
}

char* myString::getText() const {
	return text;
} 