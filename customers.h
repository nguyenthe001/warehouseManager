#pragma once
#include <string>
class customers
{
private:
	int idCustomer;
	std::string customerName;
	std::string customerAddress;
	std::string customerPhone;
	std::string customerEmail;
public:
	customers( int idCustomer,
		std::string customerName,
		std::string customerAddress,
		std::string customerPhone,
		std::string customerEmail
	);
	//Set
	void setIdCustomer(int idCustomer);
	void setCustomerName(std::string customerName);
	void setCustomerAddress(std::string customerAddress);
	void setCustomerPhone(std::string customerPhone);
	void setCustomerEmail(std::string customerEmail);
	//Get
	int getIdCustomer();
	std::string getCustomerName();
	std::string getCustomerAddress();
	std::string getCustomerPhone();
	std::string getCustomerEmail();
};

