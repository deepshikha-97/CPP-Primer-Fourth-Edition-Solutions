#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int getsize(int n);

int main()
{
	int n;
	int sz = 0;
	cin >> n;
	while((sz = getsize(n)) <= 0)
	{
		cin >> n;
	}
	
	return 0;
}

int getsize(int n)
{

	return n;
}

