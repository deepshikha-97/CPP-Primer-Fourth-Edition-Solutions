#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	string big = "big", small = "small";
	const char *cp1 = "A string example";
	const char *cp2 = "A different string";
	
	if(big == small)
		cout << "Both are equal" << endl;
	else
		cout << "Both are unequal" << endl;

	if(!strcmp(cp1, cp2))
		cout << "Both are equal" << endl;
	else
		cout << "Both are unequal" << endl;

	return 0;
}
