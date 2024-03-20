#include "customers.h"
#include <string>
customers::customers(int idCustomer,
	std::string customerName,
	std::string customerAddress,
	std::string customerPhone,
	std::string customerEmail)
{
	setIdCustomer(idCustomer);
	setCustomerName(customerName);
	setCustomerAddress(customerAddress);
	setCustomerPhone(customerPhone);
	setCustomerEmail(customerEmail);
};
//Set
void customers::setIdCustomer(int idCustomer) {
	this->idCustomer = idCustomer;
}
void customers::setCustomerName(std::string customerName) {
	this->customerName = customerName;
}
void customers::setCustomerAddress(std::string customerAddress) {
	this->customerAddress = customerAddress;
}
void customers::setCustomerPhone(std::string customerPhone) {
	this->customerPhone = customerPhone;
}
void customers::setCustomerEmail(std::string customerEmail) {
	this->customerEmail = customerEmail;
}

//Get
int customers::getIdCustomer() {
	return idCustomer;
}
std::string customers::getCustomerName() {
	return customerName;
}
std::string customers::getCustomerAddress() {
	return customerAddress;
}
std::string customers::getCustomerPhone() {
	return customerPhone;
}
std::string customers::getCustomerEmail() {
	return customerEmail;
}