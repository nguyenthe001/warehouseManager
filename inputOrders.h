#pragma once
#include <string>
#include <vector>
#include "inputOrdersInfo.h"
class inputOrders
{
private:
	int idInputOrder;
	int idSupplier; //thong tin nha cung cap; lay tu suppliers
	std::vector <inputOrdersInfo> input_orders_info;
	std::string dateInput;
public:
	inputOrders();
	void setIdInputOrder(int idInputOrder);

};

