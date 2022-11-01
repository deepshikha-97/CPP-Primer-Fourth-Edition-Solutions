#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1, s2;
	
	while(cin >> s1)
	{
		if(s1.size() >= s2.size())
			s2 = s1 + " " + s2;
		else
		{
			s1 = s2 + " "+ s1;
			s2 = s1;
		}
	}
	
	cout << s2 << endl;
	return 0;
}
