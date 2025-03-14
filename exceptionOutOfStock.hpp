#pragma once
#include "exception.hpp"

class ExceptionOutOfStock : public Exception {
public:
	ExceptionOutOfStock(int label, std::string description);
};