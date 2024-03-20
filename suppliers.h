#pragma once
#include <string>
class suppliers
{
private:
	int idSupplier;
	std::string comanyName;
	std::string contractName;
	std::string supplierAddress;
	std::string supplierPhone;
	std::string supplierEmail;
	std::string dateContract;
public:
	suppliers(int idSupplier,
		std::string comanyName,
		std::string contractName,
		std::string supplierAddress,
		std::string supplierPhone,
		std::string supplierEmail,
		std::string dateContract);
	//Set
	void setIdSupplier(int idSupplier);
	void setComanyName(std::string comanyName);
	void setContractName(std::string contractName);
	void setSupplierAddress(std::string supplierAddress);
	void setSupplierPhone(std::string supplierPhone);
	void setSupplierEmail(std::string supplierEmail);
	void setDateContract(std::string dateContract);
	//Get
	int getIdSupplier();
	std::string getCompanyName();
	std::string getContractName();
	std::string getSupplierAddress();
	std::string getSupplierPhone();
	std::string getSupplierEmail();
	std::string getDateContract();
};

