#include "product.hpp"
#include "cpu.hpp"
#include "gpu.hpp"
#include "storage.hpp"
#include "store.hpp"
#include "template.hpp"
#include "exception.hpp"
#include "exceptionInvalidQuantity.hpp"
#include "exceptionNotFound.hpp"
#include "exceptionOutOfStock.hpp"
#include <iostream>

int main() {
    Store store;

    try {
        // Dodavanje proizvoda
        CPU cpu("AMD", "Ryzen 5 3600", 149.99, 5, 3.5, 6, "AM4");
        GPU gpu("MSI", "RTX 4070", 699.99, 2, 2520, 12, "GDDR6X");
        store.addProduct(new CPU(cpu));
        store.addProduct(new GPU(gpu));

        store.showAvailableProducts();

        // ExceptionNotFound
        try {
            store.searchProducts("RTX 4070");
            store.searchProducts("GTX 1660 Super");
        }
        catch (Exception e) {
            std::cout << "Greska: " << e.description << std::endl;
        }

        // ExceptionOutOfStock
        try {
            store.sellProduct("RTX 4070");
            store.sellProduct("GTX 1660 Super");
        }
        catch (Exception e) {
            std::cout << "Greska: " << e.description << std::endl;
        }

        // ExceptionNotFound
        try {
            store.deleteProduct("Ryzen 5 3600");
            store.deleteProduct("Ryzen 5 3600");
        }
        catch (Exception e) {
            std::cout << "Greska: " << e.description << std::endl;
        }

        // Lista proizvoda nakon prodaje/brisanja
        store.showAvailableProducts();

        // Provjera koliko proizvoda ima u skladištu
        std::cout << "Ukupni broj proizvoda u skladistu: " << store.totalProducts() << "\n";

        comparePerformance(cpu, gpu);
        comparePrices(cpu, gpu);
        checkStock(cpu);

    }
    catch (Exception e) {
        std::cout << "Neocekivana greska: " << e.description << std::endl;
    }

    return 0;
}