#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int find(int word);
int get_next_word();

int main()
{
	int word;
	cin >> word;
	
	while(bool status = find(word))
	{
		word = get_next_word();
	}	
	return 0;
}

int find(int w)
{
	return 5;
}
int get_next_word()
{
	return 2;
}
