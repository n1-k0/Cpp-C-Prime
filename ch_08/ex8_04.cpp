#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;


//getline()读取整行
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

//逐个字符读取(忽略空格回车)
int main()
{
	ifstream in;
	in.open("ch_08.txt");
	assert(in.is_open());
	vector<string> vec;
	vec.clear();
	char c;
	while (!in.eof()) {
		in >> c;
		cout << c << endl;
	}
	in.close();
	return 0;
}
