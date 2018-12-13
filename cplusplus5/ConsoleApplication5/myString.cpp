#include "stdafx.h"
#include "string.h"
#include "myString.h"

myString::myString() {
	text = new char[2];
	strcpy_s(text, 2, "");
}

myString::myString(const myString &obj) {
	text = new char[strlen(obj.text)];
	strcpy_s(text, 10, obj.text);
}

myString::myString(const char *temp_text) {
	text = new char[strlen(temp_text) + 1];
	strcpy_s(text, 10, temp_text);
}

myString::~myString() {
	printf("Destructor called: %s\n", text);
	//delete[] text;
}

void myString::set(const char *temp_text) {
	char *empty_name = new char[2];
	strcpy_s(empty_name, 2, "");
	if (*text != *empty_name) delete[] text;
	text = new char[strlen(temp_text) + 1];
	strcpy_s(text, 10, temp_text);
}

void myString::display() const{
	printf("Text: %s\n", text);
}

int myString::getLength() const {
	int length = strlen(text);
	return length;
}

char* myString::getText() const {
	return text;
}