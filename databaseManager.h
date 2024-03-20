#pragma once
#include <pqxx/pqxx>
#include <string>
class databaseManager
{
public:
	databaseManager(const std::string& connStr);
    pqxx::result queryDatabase(const std::string& query);
private:
	pqxx::connection connectObject;
};

