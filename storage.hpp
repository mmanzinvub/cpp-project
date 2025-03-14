#pragma once
#include "product.hpp"
#include <vector>

class Storage {
private:
    std::vector<Product*> products;
public:
    void addProduct(Product* product);
    void showProducts() const;
};