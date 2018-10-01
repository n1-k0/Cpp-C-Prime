#include "pch.h"
#include "ex7_11.h"
#include <iostream>

int main()
{
	Sales_data sd;
	print(std::cout, sd) << std::endl;

	Sales_data sd2("123321");
	print(std::cout, sd2) << std::endl;

	Sales_data sd3("xcwwe", 4, 10.00);
	print(std::cout, sd3) << std::endl;

	Sales_data sd4(std::cin);
	print(std::cout, sd4) << std::endl;
	return 0;
}