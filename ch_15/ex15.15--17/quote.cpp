#include "quote.h"
#include <string>
#include <iostream>

using namespace  std;

void Quote::debug() const {
	std::cout //<< "data members of this class:\n"
		<< "bookNo= " << this->bookNo << " "
		<< "price= " << this->price << " ";
}
string Quote::isbn() const {
	return this->bookNo;
}