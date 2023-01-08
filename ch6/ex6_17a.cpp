#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;


int main()
{
	do
	{		//Error: curly braces {} missed
		int v1, v2;
		cout << "Please enter two numbers to sum: " ;
		cin >> v1 >> v2;
		if(cin)
			cout << "Sum is: "
			     << v1 + v2 << endl;
	}
	while(cin);	
	return 0;
}

