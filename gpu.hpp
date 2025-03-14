#pragma once
#include "product.hpp"
#include <string>

class GPU : public Product {
protected:
    int coreClock;
    int vram;
    std::string memoryType;
public:
    GPU();
    GPU(std::string brand, std::string name, double price, int quantity, int coreClock, int vram, std::string memoryType);

    void showInfo() const override;
    bool benchmark() const;

    // Getters & setters
    double getCoreClock() const;
    void setCoreClock(int coreClock);

    int getVram() const;
    void setVram(int vram);

    std::string getMemoryType() const;
    void setMemoryType(std::string memoryType);
};