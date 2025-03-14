#pragma once
#include <string>

class Product {
protected:
	std::string brand;
	std::string name;
	double price;
	int quantity;
	bool available;

public:
	Product();
	Product(std::string brand, std::string name, double price, int quantity);
	//Deep copy
	Product(const Product& other);

	virtual ~Product();

	virtual void showInfo() const;
	bool isAvailable() const;

	//Getters & setters
	std::string getBrand() const;
	void setBrand(std::string brand);

	std::string getName() const;
	void setName(std::string name);

	double getPrice() const;
	void setPrice(double price);

	int getQuantity() const;
	void setQuantity(int quantity);

	Product& operator++();
	Product& operator--();
};