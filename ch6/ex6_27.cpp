#include <iostream>
#include <vector>
#include <bitset>
#include <cassert>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::bitset;


int main()
{
	string s;
	string sought = "hello";
	
	while(cin >> s && s != sought){}
	assert(cin);
	
	return 0;
}
