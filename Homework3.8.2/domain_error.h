#pragma once
#include <iostream>

class DivisionByZeroException : public std::exception
{
public:
	void exception();
};