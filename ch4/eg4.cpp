#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	string s1("some value");
	string *sp1 = &s1;
	cout << *sp1 << " " << s1 << endl;

	string s2("another");
	string *sp2 = &s2;
	
	*sp1 = "a new value";
	cout << *sp1 << " " << s1 << endl;
	
	sp1 = sp2;
	cout << *sp1 << " " << s1 << " " << *sp2 << " " << s2;
	return 0;
}
