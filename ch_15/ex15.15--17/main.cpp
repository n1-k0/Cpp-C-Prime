#include "bulk_quote.h"
#include "disc_quote.h"
#include "quote.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	/*
	Bulk_quote bq("jj", 10, 11, 0.5);
	cout << bq.isbn() << endl;
	cout << bq.net_price(12) << endl;
	bq.debug();
	*/
	Disc_quote dq;
	dq.debug();
	system("pause");
	return 0;
}