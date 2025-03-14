#include <string>
#include "exceptionInvalidQuantity.hpp"

ExceptionInvalidQuantity::ExceptionInvalidQuantity(int label, std::string description) : Exception(label, description) {
}