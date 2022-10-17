#pragma once
#include <iostream>

class Exception : public std::domain_error
{
public:
		const char* what() const override { return "Попытка деления на 0"; }
};