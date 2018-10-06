#include "pch.h"
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	
	list<int> ilst{ 1, 2, 3 };
	vector<double> vec(ilst.begin(), ilst.end());
	vector<int> vec2{ 2, 3, 4 };
	vector<double> vec3( vec.begin(), vec.end() );
	cout << "ilst: ";
	for (auto &x : ilst) cout << x << " ";
	cout << endl;
	cout << "vec: ";
		for (auto &x : vec) cout << x << " ";
	cout << endl;
	cout << "vec2: ";
		for (auto &x : vec2) cout << x << " ";
	cout << endl;
	cout << "vec3: ";
		for (auto &x : vec3) cout << x << " ";
	cout << endl;
	return 0;
}