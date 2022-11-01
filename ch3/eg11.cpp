#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1("hello");
	string s2("world");
	
	string s3 = s1 + ", " + s2 + "\n";
	cout <<  s3;
	return 0;
}
