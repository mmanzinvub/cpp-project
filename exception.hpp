#pragma once
#include <string>

class Exception {
protected:
	int label;
public:
	std::string description;

	Exception();
	Exception(int label, std::string description);

	int getLabel();
};