#include "databaseManager.h"
#include <iostream>
#include <string>
#include <pqxx/pqxx>

databaseManager::databaseManager(const std::string& connStr) : connectObject(connStr) {
    if (connectObject.is_open()) {
        std::cout << "Opened database successfully: " << connectObject.dbname() << std::endl;
    }
    else {
        std::cout << "Can't open database" << std::endl;
    }
};

pqxx::result databaseManager::queryDatabase(const std::string& query) {
    pqxx::result responsive;
    try {
        pqxx::work worker(connectObject);
        responsive = worker.exec(query);
        worker.commit();
        // Xử lý kết quả
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        // Xử lý ngoại lệ
    }
    return responsive;
}