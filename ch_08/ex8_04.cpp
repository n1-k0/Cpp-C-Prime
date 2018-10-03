#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream in("ch_08.txt");
	vector<string> vec;
	vec.clear();
	string s;
	if (in) {
		while (getline(in, s)) vec.push_back(s);
		vector<string>::iterator iter = vec.begin();
		while (iter != vec.end()) cout << *iter << endl, iter++;
	}
	else cout << "in ERROR!" << endl;

	return 0;
}
