#pragma once
#include "product.hpp"
#include <vector>
#include <string>

class Store {
private:
    std::vector<Product*> products;

public:
    ~Store();
    void addProduct(Product* product);
    void showAvailableProducts() const;
    void searchProducts(const std::string& name);
    void deleteProduct(const std::string& name);
    void sellProduct(const std::string& name);
    int totalProducts() const;
};