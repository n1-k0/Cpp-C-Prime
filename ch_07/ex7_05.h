#pragma once
#ifndef EX7_04
#define EX7_04

#include <string>

class Person {
	std::string name;
	std::string address;

public:
	std::string getName() const {
		return name;
	}
	std::string getAddress() const {
		return address;
	}

};

#endif // !EX7_04
