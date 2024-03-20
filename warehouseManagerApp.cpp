#include "warehouseManagerApp.h"
#include "warehouseManager.h"
#include <iostream>
warehouseManagerApp::warehouseManagerApp()
	:version("1.0") {};
void warehouseManagerApp::init() {
	warehouseManager::getManager();
	std::cout << "Welcome!";
}