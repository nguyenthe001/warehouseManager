#pragma once
#include <string>
#include "suppliers.h"
class products
{
private:
	int idProduct;
	std::string nameProduct;
	//suppliers supplier;
public:
	products(int idProduct, std::string nameProduct);
	//set
	void setIdProduct(int idProduct);
	void setNameProduct(std::string nameProduct);
	void setSupplier(suppliers supplier);
	//get
	int getIdProduct();
	std::string getNameProduct();
};

