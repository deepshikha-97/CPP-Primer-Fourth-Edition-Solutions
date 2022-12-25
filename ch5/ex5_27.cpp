#include <iostream>
#include <string>
#include <bitset>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::bitset;
using std::vector;

int main()
{
	string s = "word";
	string p1 = s + s[s.size()-1] == 's' ? "" : "s";
	return 0;
}
