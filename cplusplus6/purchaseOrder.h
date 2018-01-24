#pragma once
#include "expense.h"
#include "myString.h"

class purchaseOrder : public expense {
	int orderNo;
	int cost;
public:
	purchaseOrder();
	purchaseOrder(int, int, myString);
	~purchaseOrder();
	virtual int getCost() const;
};