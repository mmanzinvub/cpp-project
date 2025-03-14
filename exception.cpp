#include "exception.hpp"
#include <string>
#include <iostream>

Exception::Exception() : Exception(0, "") {
}

Exception::Exception(int label, std::string description) : label(label), description(description) {
}

int Exception::getLabel() {
	return label;
}