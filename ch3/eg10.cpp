#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1("hello, ");
	string s2("world\n");
	string s3 = s1 + s2;
	cout << s3;
	
	s1 += s2;
	cout << s1; 
	return 0;
}
