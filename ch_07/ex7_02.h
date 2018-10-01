#pragma once
#ifndef EX7_02
#define EX7_02

#include <string>

struct Sales_data{
	std::string bookNo;
	int units_sold = 0;
	double revenue = 0.0;

	Sales_data& combine(const Sales_data&);
	std::string isbn() { return bookNo; };
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

// TODO: 添加要在此处预编译的标头

#endif //EX7_02
