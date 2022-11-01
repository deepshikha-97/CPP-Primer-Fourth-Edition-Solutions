#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string big = "big", small = "small";
	string s1  = big;
	
	if(big ==  small)
		cout << big << " is equal to " << small << endl;
	else
		cout << big << " is not equal to " << small << endl;

	if(big <=  s1)
		cout << big << " is less than equal to " << s1 << endl;
	else
		cout << big << " is not less than equal to " << s1 << endl;
		
	return 0;
}
