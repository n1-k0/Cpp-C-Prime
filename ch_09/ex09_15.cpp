#include "pch.h"
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	
	list<int> ilst{ 1, 2, 3 };
	vector<int> vec{ 1, 2, 3 };
	
	cout << (vector<int>(ilst.begin(), ilst.end()) == vec) << endl;
	return 0;
}
