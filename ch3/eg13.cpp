#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str("some string");
	
	for (string::size_type ix =  0; ix != str.size(); ++ix)
		cout << str[ix]<< endl;
	return 0;
}
