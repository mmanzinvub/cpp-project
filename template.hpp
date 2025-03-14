#pragma once
#include "cpu.hpp"
#include "gpu.hpp"
#include <iostream>

template<typename T1, typename T2>
void comparePerformance(const T1& product1, const T2& product2) {
    bool benchmark1 = product1.benchmark();
    bool benchmark2 = product2.benchmark();
    if (benchmark1 && !benchmark2) {
        std::cout << product1.getName() << " se moze koristiti za gaming konfiguracije, dok " << product2.getName() << " se ne moze.\n";
    }
    else if (!benchmark1 && benchmark2) {
        std::cout << product2.getName() << " se moze koristiti za gaming konfiguracije, dok " << product1.getName() << " se ne moze.\n";
    }
    else if (benchmark1 && benchmark2) {
        std::cout << product1.getName() << " i " << product2.getName() << " se mogu koristiti za gaming konfiguracije.\n";
    }
    else {
        std::cout << "Ne mogu se koristiti za gaming konfiguraciju.\n";
    }
}

template<typename T1, typename T2>
void comparePrices(const T1& product1, const T2& product2) {
    if (product1.getPrice() > product2.getPrice()) {
        std::cout << product1.getName() << " je skuplji.\n";
    }
    else if (product1.getPrice() < product2.getPrice()) {
        std::cout << product2.getName() << " je skuplji.\n";
    }
    else {
        std::cout << "Oba dva imaju istu cijenu.\n";
    }
}

template<typename T>
void checkStock(const T& product) {
    std::cout << product.getName() << " ima " << product.getQuantity() << " komada u skladistu.\n";
}