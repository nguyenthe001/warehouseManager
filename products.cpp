#include <iostream>
#include <string>
#include "products.h"
#include "suppliers.h"
products::products(int idProduct, std::string nameProduct) {
	setIdProduct(idProduct);
	setNameProduct(nameProduct);

	//setSupplier()
};
//set
void products::setIdProduct(int idProduct) {
	this->idProduct = idProduct;
}
void products::setNameProduct(std::string nameProduct) {
	this->nameProduct = nameProduct;
}
//void products::setSupplier(suppliers supplier){
//	this->supplier = supplier;
//}
//get
int products::getIdProduct() {
	return idProduct;
}
std::string products::getNameProduct() {
	return nameProduct;
}