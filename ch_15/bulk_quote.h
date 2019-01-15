#pragma once
#ifndef BULK_QUOTE
#define BULK_QUOTE

#include <string>
#include <iostream>
#include "disc_quote.h"

using namespace std;

class Bulk_quote : public Disc_quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const string &book, double price, size_t qty, double disc) :
		Disc_quote(book, price, qty, disc) {};
	double net_price(size_t) const override;
	void debug() const override;
};


#endif BULK_QUOTE