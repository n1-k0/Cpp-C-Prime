#pragma once
#ifndef EX7_06
#define EX7_06

#include <string>
using std::istream; using std::ostream; using std::string;

struct Sales_data {
	std::string bookNo;
	int units_sold = 0;
	double revenue = 0.0;

	Sales_data& combine(const Sales_data&);
	std::string const& isbn() const{ return bookNo; };
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue;
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

#endif // EX7_06
