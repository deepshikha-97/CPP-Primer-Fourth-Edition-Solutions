#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	string str("a very long literal string");
	
	for(int ix = 0; ix != 1000000; ++ix){
		string str2 = str;
		if(str != str)
			;
	}
	return 0;
}
