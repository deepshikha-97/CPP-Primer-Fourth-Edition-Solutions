#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1 = "hello";
	string s2 = "world";
	
	string s3 = s1 = ", ";
	string s4 = "hello" + ", ";
	string s5 = s1 + ", " + "world";
	string s6 = "hello" + ", " + s2;
	return 0;
}
