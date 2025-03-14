#include <string>
#include "exceptionOutOfStock.hpp"

ExceptionOutOfStock::ExceptionOutOfStock(int label, std::string description) : Exception(label, description) {
}