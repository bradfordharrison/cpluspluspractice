// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

void printString(const char *str) {
	char *localString;
	localString = new char[strlen(str) + 1];
	strcpy_s(localString, 100, str);
	printf(localString);
	delete[] localString;

}

int main()
{
	printString("Hello World\n");
}
