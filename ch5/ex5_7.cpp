#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
	int i = 0; 
	while((cin >> i) && (i != 42))
	{
		//i++;
	}
	cout << i << endl;	
	return 0;
}

