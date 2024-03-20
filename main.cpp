#include <iostream>
#include <string>
#include "products.h"
#include "suppliers.h"
#include "customers.h"
#include "inputOrdersInfo.h"
#include "inputOrders.h"
#include "outputOrdersInfo.h"
#include "outputOrders.h"
#include "warehouseManager.h"
#include "warehouseManagerApp.h"
#include "databaseManager.h"
#include <pqxx/pqxx>

warehouseManager* warehouseManager::manager = nullptr;

int main()
{
    databaseManager dbManager("host=localhost port=5432 dbname=warehousemanager user=postgres password =nthe0011");
    dbManager.queryDatabase("SELECT * FROM inputorders");
    warehouseManagerApp app;
    products* keomut = new products();
}