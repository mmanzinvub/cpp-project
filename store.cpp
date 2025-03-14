#include "store.hpp"
#include "exception.hpp"
#include "exceptionOutOfStock.hpp"
#include "exceptionNotFound.hpp"
#include <iostream>

Store::~Store() {
    for (Product* product : products) {
        delete product;
    }
}

void Store::addProduct(Product* product) {
    products.push_back(product);
}

void Store::showAvailableProducts() const {
    for (const Product* proizvod : products) {
        proizvod->showInfo();
        std::cout << "***********************\n";
    }
}

void Store::searchProducts(const std::string& name) {
    for (const Product* proizvod : products) {
        if (proizvod->getName() == name) {
            proizvod->showInfo();
            return;
        }
    }
    throw ExceptionNotFound(2, "Proizvod " + name + " nije pronaden!");
}

void Store::deleteProduct(const std::string& name) {
    for (auto it = products.begin(); it != products.end(); ++it) {
        if ((*it)->getName() == name) {
            delete* it;
            products.erase(it);
            std::cout << "Proizvod " << name << " je obrisan.\n";
            return;
        }
    }
    throw ExceptionNotFound(2, "Proizvod " + name + " nije pronaden!");
}

void Store::sellProduct(const std::string& name) {
    for (Product* proizvod : products) {
        if (proizvod->getName() == name) {
            if (proizvod->getQuantity() > 0) {
                --(*proizvod);
                std::cout << "Prodan je " << name << "." << " \nPreostalo: " << proizvod->getQuantity() << " komada." << "\n";
            }
            else {
                throw ExceptionOutOfStock(1, "Proizvod " + name + " nije dostupan!");
            }
            return;
        }
    }
    throw ExceptionNotFound(2, "Proizvod " + name + " nije pronaden!");
}

int Store::totalProducts() const {
    return products.size();
}