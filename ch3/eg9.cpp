#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string substr = "Hello";
	string phrase = "Hello World";
	string slang = "Hiya";
	
	if(substr < phrase)
		cout << substr << " is less than the " << phrase << endl;
	if(substr > slang)
		cout << substr << " is greater than the " << slang << endl;	
	else
		cout << substr << " is less than the " << slang << endl;	
	return 0;
}
