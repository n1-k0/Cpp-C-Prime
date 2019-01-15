#pragma once
#ifndef DISC_QUOTE
#define DISC_QUOTE

#include <string>
#include <iostream>
#include "quote.h"

using namespace std;

class Disc_quote : public Quote {
public:
	Disc_quote() = default;
	Disc_quote(const string& book, double price, size_t qty, double disc) :
		Quote(book, price), quantity(qty), discount(disc) {};
	double net_price(size_t) const = 0;
	virtual void debug() const override;
protected:
	size_t quantity = 0;
	double discount = 0.0;
};

#endif DISC_QUOTE