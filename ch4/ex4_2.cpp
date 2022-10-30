#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string sa[10];
int ia[10];

int main()
{
	string sa2[10];
	int ia2[10];
	
	for(int i = 0; i < 10; i++)
	{
	cout << "string: " << sa[i] << "Integer: " << ia[i] << endl;
	cout << "string: " << sa2[i] << "Integer: " << ia2[i] <<"\n" << endl;
	}
	
	return 0;
}
