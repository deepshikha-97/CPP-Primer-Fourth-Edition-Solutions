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
	char s2[10];
	int i = 0;
	
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
