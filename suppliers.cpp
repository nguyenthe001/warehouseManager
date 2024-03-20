#include "suppliers.h"
suppliers::suppliers(int idSupplier,
	std::string comanyName,
	std::string contractName,
	std::string supplierAddress,
	std::string supplierPhone,
	std::string supplierEmail,
	std::string dateContract)
{
	setIdSupplier(idSupplier);
	setComanyName(comanyName);
	setContractName(contractName);
	setSupplierAddress(supplierAddress);
	setSupplierPhone(supplierPhone);
	setSupplierEmail(supplierEmail);
	setDateContract(dateContract);
}
//Set
void suppliers::setIdSupplier(int idSupplier) {
	this->idSupplier = idSupplier;
}
void suppliers::setComanyName(std::string comanyName) {
	this->comanyName = comanyName;
}
void suppliers::setContractName(std::string contractName) {
	this->contractName = contractName;
}
void suppliers::setSupplierAddress(std::string supplierAddress) {
	this->supplierAddress = supplierAddress;
}
void suppliers::setSupplierPhone(std::string supplierPhone) {
	this->supplierPhone = supplierPhone;
}
void suppliers::setSupplierEmail(std::string supplierEmail) {
	this->supplierEmail = supplierEmail;
}
void suppliers::setDateContract(std::string dateContract) {
	this->dateContract = dateContract;
}
//Get
int suppliers::getIdSupplier(){
	return idSupplier;
}
std::string suppliers::getCompanyName(){
	return comanyName;
}
std::string suppliers::getContractName(){
	return contractName;
}
std::string suppliers::getSupplierAddress(){
	return supplierAddress;
}
std::string suppliers::getSupplierPhone() {
	return supplierPhone;
}
std::string suppliers::getSupplierEmail() {
	return supplierEmail;
}
std::string suppliers::getDateContract() {
	return dateContract;
}