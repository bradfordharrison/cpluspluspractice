// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

class NameClass {
	static int tracker;
	char *name;
	int ID;
public:
	NameClass();
	NameClass(char*);
	~NameClass();
	void setName(char*);
	void displayName() const;
	static void displayNumObjects();
};

NameClass::NameClass() {
//	char *temp_name = new char[2];
//	strcpy_s(temp_name, 2, "");
	name = new char[2];
	strcpy_s(name, 2, "");
	ID = -1;
	printf("Default constructor called\n");
}

NameClass::NameClass(char *temp_name) {
	name = new char[strlen(temp_name) + 1];
	ID = ++tracker;
	strcpy_s(name, 100, temp_name);
	printf("Constructor called\n");
}

NameClass::~NameClass() {
	delete[] name;
	printf("Destructor called\n");
}

void NameClass::setName(char *temp_name) {
	char *empty_name = new char[2];
	strcpy_s(empty_name, 2, "");
	if (*name == *empty_name) ID = ++tracker;
    if (*name != *empty_name) delete[] name;
	name = new char[strlen(temp_name) + 1];
	strcpy_s(name, 100, temp_name);
	printf("Name set\n");
}

void NameClass::displayName() const{
	printf("Name: %s\n", name);
}

void NameClass::displayNumObjects() {
	printf("Number of objects: %i\n", tracker);
}

int NameClass::tracker = 0;

int main()
{
//	int i;
//	for (i = 0; i < 10; i++) {
//		printf("%i\n", i);
//	};

	char* TC = new char;
	char* TC2 = new char;
	char* Logan = new char;
	strcpy_s(TC, 3, "TC");
	strcpy_s(TC2, 4, "TC2");
	strcpy_s(Logan, 6, "Logan");
	NameClass m;
	NameClass n(Logan);
	m.setName(TC);
	n.displayName();
	m.displayName();
	n.displayNumObjects();
	m.setName(TC2);
	m.displayName();
	n.displayNumObjects();

	return(0);
}

