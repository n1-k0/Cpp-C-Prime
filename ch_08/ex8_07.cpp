#include "pch.h"
#include "ex7_26.h"
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

/*int main(int argc, char **argv) {

	cout << argc << "xx" << endl;
	for (int i = 0; i < argc; ++i)

		cout << argv[i]  << i << endl;

	return 0;

}*/


int main(int argc, char *argv[])
{
	cout << argv[1] << endl;
	cout << argv[2] << endl;
	ifstream in(argv[1]);
	ofstream out(argv[2]);
	Sales_data total;
	if (read(in, total))
	{
		Sales_data trans;
		while (read(in, trans)) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(out, total) << std::endl;
				total = trans;
			}
		}
		print(out, total) << std::endl;
	}
	else
	{
		std::cout << "No data?!" << std::endl;
		return -1;
	}
	return 0;
}