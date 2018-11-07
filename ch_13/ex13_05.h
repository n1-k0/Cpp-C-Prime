#pragma once
#ifndef EX_13_05_H
#define EX_13_05_H
#include <string>

class HasPtr{
public:
	HasPtr(const std::string &s = std::string()):
		ps(new std::string(s)), i(0) {}
	HasPtr(const HasPtr& hp) : ps(new std::string(*hp.ps)), i(hp.i) {}
private:
	int i;
	std::string *ps;
};

#endif