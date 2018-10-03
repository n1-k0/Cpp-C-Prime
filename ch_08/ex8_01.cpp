
#include <iostream>

std::istream& in(std::istream& is)
{
	int x;
	while (is >> x) {
		std::cout << x << std::endl;
	}
	is.clear();
	return is;
}

int main()
{
	std::istream& is = in(std::cin);
	std::cout << is.rdstate() << std::endl;
	return 0;
}
