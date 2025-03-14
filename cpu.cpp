#include "cpu.hpp"
#include <iostream>

CPU::CPU() : CPU("", "", 0.0, 0, 0.0, 0, "") {
}

CPU::CPU(std::string brand, std::string name, double price, int quantity, double clockSpeed, int coreCount, std::string socketType) 
	: Product(brand, name, price, quantity), clockSpeed(clockSpeed), coreCount(coreCount), socketType(socketType) {
}

void CPU::showInfo() const {
	std::cout << brand << " " << name << "\n" 
		<< price << " EUR" << "\n"
		<< "Jezgre: " << coreCount << "\n"
		<< "Brzina procesora: " << clockSpeed << " GHz" << "\n" 
		<< "Podnozje: " << socketType << "\n" 
		<< quantity << " komada u skladistu" << "\n" 
		<< "Stanje: " << (available ? "dostupno" : "nedostupno") << std::endl;
}

bool CPU::benchmark() const {
	bool result = (coreCount >= 6 && clockSpeed >= 3.5);
	if (result) {
		std::cout << "Ovaj CPU se moze koristiti za gaming konfiguraciju." << std::endl;
	}
	return result;
}

//Getters & setters
double CPU::getClockSpeed() const {
	return clockSpeed;
}
void CPU::setClockSpeed(double clockSpeed) {
	this->clockSpeed = clockSpeed;
}

int CPU::getCoreCount() const {
	return coreCount;
}
void CPU::setCoreCount(int coreCount) {
	this->coreCount = coreCount;
}

std::string CPU::getSocketType() const {
	return socketType;
}
void CPU::setSocketType(std::string socketType) {
	this->socketType = socketType;
}