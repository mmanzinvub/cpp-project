#include "storage.hpp"
#include <iostream>

void Storage::addProduct(Product* product) {
    products.push_back(product);
}

void Storage::showProducts() const {
    for (const auto& product : products) {
        product->showInfo();
        std::cout << "***********************" << std::endl;
    }
}