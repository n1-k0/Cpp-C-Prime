#include "pch.h"
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

vector<int>* c()
{
	return new vector<int>;
}

void in(istream& is, vector<int>* v)
{
	int x;
	while (is >> x) v->push_back(x);
}

void out(ostream& os, vector<int>* v)
{
	for (int i = 0; i < (*v).size(); i++) {
		os << (*v)[i] << endl;
	}
}



int main()
{
	vector<int>* v = c();
	in(cin, v);
	out(cout, v);
	delete v;
	return 0;
}