#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin;

int main()
{
	string word;
	vector<string> text;
	while(cin >> word){
		text.push_back(word);
	}
	return 0;
}
