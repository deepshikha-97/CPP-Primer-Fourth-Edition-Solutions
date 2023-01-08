#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int find_a_value();

int main()
{
	int ptr;
	while(ptr = 0)		//Error: This loop will terminate  because assignment operator is used instead of conditional operator. So, in first iteration itself it will become false and comes out of loop.
	{
		ptr = find_a_value();
	}
	return 0;
}

int find_a_value()
{
	return 3;
}
