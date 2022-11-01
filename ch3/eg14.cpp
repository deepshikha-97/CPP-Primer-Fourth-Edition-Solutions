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
		str[ix] = '*';
	
	cout << str << endl;
	return 0;
}
