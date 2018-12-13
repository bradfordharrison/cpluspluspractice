#include "myString.h"

class inventoryItem{
	myString owner;
	int serialNo;
public:
	inventoryItem();
	inventoryItem(int, myString);
	~inventoryItem();
	void printOwner() const;
	void printSerialNo() const;
};