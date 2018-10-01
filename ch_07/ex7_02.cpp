#include "ex7_02.h"
#include <iostream>

int main()
{
	Sales_data sd,sd2;
	sd2.units_sold = 1;
	sd2.revenue = 2;
	sd.combine(sd2);
    std::cout << sd.units_sold << " " << sd.revenue; 
}
