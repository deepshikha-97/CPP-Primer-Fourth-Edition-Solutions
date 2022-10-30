#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	string s1;
	char s2[90];
	int i = 0;
	getline(cin, s1);
	cout << s1 << endl;
	
	//while(!((cin>>s2[i]).eof()))
	while(cin.get(s2[i]))
	{
		//cin >> s2[i];
		i++;	
	}
	s2[i] = '\0';
	cout << "\n" << s2 << endl;

	return 0;
}
