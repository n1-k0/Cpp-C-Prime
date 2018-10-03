#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <assert.h>
#include <istream>
#include <sstream>

using namespace std;

void fun(istream& in)
{
	string s;
	vector<string> vec;
	while (getline(in, s)) {
		vec.push_back(s);
	}
	for (auto &s : vec) {
		istringstream ist(s);
		string word;
		while (ist >> word) {
			cout << word << endl;
		}
	}
	
	

}

int main()
{
	ifstream in("ch_08.txt");
	fun(in);
	return 0;
}
