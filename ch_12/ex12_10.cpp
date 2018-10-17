#include "pch.h"
#include <iostream>
#include <memory>

using namespace std;

void process(shared_ptr<int> ptr)
{
	std::cout << "inside the process function:" << ptr.use_count() << "\n";
}

int main()
{
	shared_ptr<int> p(new int(42));
	process(p);
	std::cout << p.use_count() << "\n";
	auto q = p;
	std::cout << p.use_count() << "\n";
	std::cout << "the int p now points to is:" << *p << "\n";
	return 0;
}