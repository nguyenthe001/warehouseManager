#pragma once
#include <string>
#include <vector>
#include "outputOrdersInfo.h"
class outputOrders
{
private:
	int  idOutputOrder;
	int idCustomer;//thong tin khach hang; lay tu customer
	std::vector <outputOrdersInfo> output_orders_info;
	std::string dateOutput;
public:
};

