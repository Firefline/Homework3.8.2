#include "domain_error.h"
#include "Figure.h"


void DivisionByZeroException::exception()
{
	try
	{
		Figure::check;
	}
	catch (...)
	{

	}
}
