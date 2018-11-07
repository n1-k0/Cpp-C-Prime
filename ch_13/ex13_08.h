#pragma once
#ifndef EX_13_08_H
#define EX_13_08_H
#include <string>

class HasPtr {
public:
	HasPtr(const std::string &s = std::string()) :
		ps(new std::string(s)), i(0) {}
	HasPtr(const HasPtr& hp) : ps(new std::string(*hp.ps)), i(hp.i) {}
	HasPtr& operator = (const HasPtr& hp) {
		if (this != &hp) {
			auto newp = new std::string(*hp.ps);
			delete ps;
			ps = newp;
			i = hp.i;
		}
	}
private:
	int i;
	std::string *ps;
};

#endif
