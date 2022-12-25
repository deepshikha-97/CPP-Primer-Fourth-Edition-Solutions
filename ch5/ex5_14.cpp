#include <iostream>
#include <string>
#include <bitset>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::bitset;
int retrieve_pointer();

int main()
{
	int ptr;
	int ival=2;
	
	if((ptr = retrieve_pointer()) != 0)
	{
		cout << "assignment is legal" << endl;
	}

	//ival += ival + 1; //Legal but it is kind of bug
	ival += 1;
	cout << ival << endl;
	return 0;
}

int retrieve_pointer()
{
	return 0;
}

