#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::string;

int main()
{
	string word;
	vector<string> text;
	
	while(cin >> word)
		text.push_back(word);
	return 0;
}
