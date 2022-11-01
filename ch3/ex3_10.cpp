#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
	string line, line2;
	getline(cin,line);
	
	for(string::size_type ix = 0; ix != line.size(); ix++)
	{
		if(!ispunct(line[ix]))
			line2 = line2 + line[ix];
	}
	cout << line2 << endl;
	return 0;
}
