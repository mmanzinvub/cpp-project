#include "product.hpp"
#include "exceptionInvalidQuantity.hpp"
#include <iostream>

Product::Product() : Product("", "", 0.0, 0) {
}

Product::Product(std::string brand, std::string name, double price, int quantity) {
	this->brand = brand;
	this->name = name;
	this->price = price;
	this->quantity = quantity;
	this->available = (quantity > 0);
}

//Deep copy
Product::Product(const Product& other) {
	brand = other.brand;
	name = other.name;
	price = other.price;
	quantity = other.quantity;
	available = other.available;
}

Product::~Product() {}

void Product::showInfo() const {
	std::cout << brand << " " << name << "\n" 
	<< price << " EUR" << "\n" 
	<< "Komada u skladistu: " << quantity << "\n"
	<< "Stanje: " << (available ? "dostupno" : "nedostupno") << std::endl;
}

bool Product::isAvailable() const {
	return available;
}

//Getters & setters
std::string Product::getBrand() const {
	return brand;
}
void Product::setBrand(std::string brand) {
	this->brand = brand;
}

std::string Product::getName() const {
	return name;
}
void Product::setName(std::string name) {
	this->name = name;
}

double Product::getPrice() const {
	return price;
}
void Product::setPrice(double price) {
	this->price = price;
}

int Product::getQuantity() const {
	return quantity;
}
void Product::setQuantity(int quantity) {
	if (quantity < 0) {
		throw ExceptionInvalidQuantity(3, "Kolicina u skladistu ne moze biti negativna!");
	}
	this->quantity = quantity;
	available = (quantity > 0);
}

Product &Product::operator++() {
	quantity++;
	available = (quantity > 0);
	return *this;
}

Product& Product::operator--() {
	quantity--;
	available = (quantity > 0);
	return *this;
}