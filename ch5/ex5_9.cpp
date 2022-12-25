#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
	unsigned long ul1 = 3, ul2 = 7;
	
	cout << "a)" << (ul1 & ul2) << " b)" << (ul1 && ul2) << " c)" << (ul1 | ul2) << " d)" << (ul1 || ul2) << endl;
	return 0;
}

