// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "myString.h"
#include "inventoryItem.h"

void copy(myString copyString) {
	copyString.display();
}

void noCopy(const myString& copyString) {
	copyString.display();
}

int main()
{
	printf("Start using strings...\n");
	//Create a String, a const String and a dynamically
	//allocated String

	myString myName("Eric");
	const myString bossName("Dan");
	myString *ps = new myString("Elmer");

	copy(myName);
	noCopy(bossName);

	myName.display();//Eric
	bossName.display(); //Dan
	ps -> display(); //Elmer

	char *myTextPtr;

	myTextPtr = new char;

	strcpy_s(myTextPtr, 10, myName.getText());

	printf("Text returned from myName.getText(): %s\n", myTextPtr);

	printf("Start Using InventoryItems...\n");

	inventoryItem Stapler(5531, myName);

	inventoryItem Scissors(3012, "David");

	inventoryItem safeCopy = Stapler;

	Stapler.printOwner();
	Stapler.printSerialNo();
	Scissors.printOwner();
	Scissors.printSerialNo();
	safeCopy.printOwner();
	safeCopy.printSerialNo();

	printf("Cleanup Time...\n");

	delete ps;
}
