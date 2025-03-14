#pragma once
#include "exception.hpp"

class ExceptionNotFound : public Exception {
public:
	ExceptionNotFound(int label, std::string description);
};