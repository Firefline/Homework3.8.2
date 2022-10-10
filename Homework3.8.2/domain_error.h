#pragma once
#include <iostream>
class domain_error : public std::exception
{
public:
	const char* what() const override { return "не был создан. Причина: "; }
};