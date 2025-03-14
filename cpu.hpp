#pragma once
#include "product.hpp"
#include <string>

class CPU : public Product {
protected:
	double clockSpeed;
	int coreCount;
	std::string socketType;
public:
	CPU();
	CPU(std::string brand, std::string name, double price, int quantity, double clockSpeed, int coreCount, std::string socketType);

	void showInfo() const override;

	bool benchmark() const;

	//Gettters & setters
	double getClockSpeed() const;
	void setClockSpeed(double clockSpeed);

	int getCoreCount() const;
	void setCoreCount(int coreCount);

	std::string getSocketType() const;
	void setSocketType(std::string socketType);
};