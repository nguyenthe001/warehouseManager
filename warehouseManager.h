#pragma once
class warehouseManager
{
public:
	static warehouseManager* getManager() {
		if (manager == nullptr) {
			manager = new warehouseManager();
		}
		return manager;
	}
private:
	static warehouseManager* manager;
	warehouseManager();
};

