#include "stdafx.h"
#include "string.h"
#include "inventoryItem.h"
#include "myString.h"

inventoryItem::inventoryItem():serialNo(-1){
}

inventoryItem::inventoryItem(int temp_serialNo, myString temp_myString):serialNo(temp_serialNo) {
	char *temp_text = new char[10];
	strcpy_s(temp_text, 10, "");
	strcpy_s(temp_text, 10, temp_myString.getText());
	owner.set(temp_text);
}

inventoryItem::~inventoryItem() {
	printf("Inventory destructor called\n");
}

void inventoryItem::printOwner() const{
	char* temp_text;
	temp_text = owner.getText();
	printf("Owner: %s\n", temp_text);
}

void inventoryItem::printSerialNo() const{
	printf("Serial Number: %i\n", serialNo);
}