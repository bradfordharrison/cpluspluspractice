#include "stdafx.h"
#include "string.h"
#include "myString.h"
#include "expense.h"
#include "purchaseOrder.h"

purchaseOrder::purchaseOrder() {
	orderNo = 0;
	cost = 0;
}

purchaseOrder::purchaseOrder(int temp_orderNo, int temp_cost, myString temp_myString):orderNo(temp_orderNo), cost(temp_cost){
}

purchaseOrder::~purchaseOrder() {
}

int purchaseOrder::getCost() const {
	return cost;
}