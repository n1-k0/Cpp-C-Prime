#include "pch.h"
#include <cstdio>
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> c()
{
	return make_shared<vector<int>> ();
}

void in(istream& is, shared_ptr<vector<int>> v)
{
	int x;
	while (is >> x) v->push_back(x);
}

void out(ostream& os, shared_ptr<vector<int>> v)
{
	for (int i = 0; i < (*v).size(); i++) {
		os << (*v)[i] << endl;
	}
}



int main()
{
	shared_ptr<vector<int>> v = c();
	in(cin, v);
	out(cout, v);
	return 0;
}