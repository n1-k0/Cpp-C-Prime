#include "bulk_quote.h"
#include <string>
#include <iostream>

using namespace std;

double Disc_quote::net_price(size_t n) const{
	return n * price * (n >= quantity ? 1 - discount : 1);
}
void Disc_quote::debug() const
{
	Quote::debug();
	std::cout //<< "data members of this class:\n"
		<< "min_qty= " << quantity << " "
		<< "discount= " << discount << " ";
}