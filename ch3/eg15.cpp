#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s("Hello World!!!");
	string::size_type punct_cnt = 0;
		
	//count number of punctuation characters in s
	for(string::size_type index = 0; index != s.size(); ++index)
	{
		if(ispunct(s[index]))
			punct_cnt++;
	}
	
	cout << punct_cnt
		<< " punctuation charactors in " << s << endl;
	return 0;
}
