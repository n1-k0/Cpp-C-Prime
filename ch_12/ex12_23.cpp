#include "pch.h"
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	char* s = new char[strlen("hello" "world") + 1]();
	strcat(s, "hello");
	strcat(s, "world");
	cout << s << endl;
	delete[] s;


	return 0;
}
