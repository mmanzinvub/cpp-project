#pragma once
#include "exception.hpp"

class ExceptionInvalidQuantity : public Exception {
public:
	ExceptionInvalidQuantity(int label, std::string description);
};