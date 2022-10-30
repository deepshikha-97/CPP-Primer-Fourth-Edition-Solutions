#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	string s("hello world");
	string *sp = &s;
	cout << *sp << " " << s;
	
	*sp = "good bye";
	cout << *sp << " " << s;
	
	string s2 = "some value";
	sp = &s2;
	cout << *sp << " " << s << " " << s2;
	return 0;
}
