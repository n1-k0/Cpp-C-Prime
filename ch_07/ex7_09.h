#pragma once
#ifndef EX7_09
#define EX7_09

#include <string>

class Person {
	std::string name;
	std::string address;

public:
	std::string const& getName() const {
		return name;
	}
	std::string const& getAddress() const {
		return address;
	}
};	

std::istream &read(std::istream &is, Person &p)
{
	return return is >> person.name >> person.address;
}

std::ostream &print(std::ostream &os, const Person &person)
{
	return os << person.name << " " << person.address;
}

#endif // !EX7_09