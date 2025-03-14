#include <string>
#include "exceptionNotFound.hpp"

ExceptionNotFound::ExceptionNotFound(int label, std::string description) : Exception(label, description) {
}