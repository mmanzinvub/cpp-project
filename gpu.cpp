#include "gpu.hpp"
#include <iostream>

GPU::GPU() : GPU("", "", 0.0, 0, 0.0, 0, "") {
}

GPU::GPU(std::string brand, std::string name, double price, int quantity, int coreClock, int vram, std::string memoryType)
    : Product(brand, name, price, quantity), coreClock(coreClock), vram(vram), memoryType(memoryType) {
}

void GPU::showInfo() const {
    std::cout << brand << " " << name << "\n"
        << price << " EUR\n"
        << "VRAM: " << vram << " GB" << " " << memoryType << "\n"
        << "Frekvencija: " << coreClock << " MHz\n"
        << quantity << " komada u skladistu\n"
        << "Stanje: " << (available ? "dostupno" : "nedostupno") << std::endl;
}

bool GPU::benchmark() const {
    bool result = (vram >= 6 && coreClock >= 1500);
    if (result) {
        std::cout << "Ovaj GPU se moze koristiti za gaming konfiguraciju." << std::endl;
    }
    return result;
}

// Getters & setters
double GPU::getCoreClock() const {
    return coreClock;
}
void GPU::setCoreClock(int coreClock) {
    this->coreClock = coreClock;
}

int GPU::getVram() const { 
    return vram; 
}
void GPU::setVram(int vram) { 
    this->vram = vram; 
}

std::string GPU::getMemoryType() const { 
    return memoryType; 
}
void GPU::setMemoryType(std::string memoryType) { 
    this->memoryType = memoryType; 
}