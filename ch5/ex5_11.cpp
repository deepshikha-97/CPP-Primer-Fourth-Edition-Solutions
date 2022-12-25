#include <iostream>
#include <string>
#include <bitset>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::bitset;

int main()
{
	int i;
	double  d;
	
	d = i = 3.5;
	cout << "d = " << d << "i = " << i << endl;
	i = d = 3.5;
	cout << "d = " << d << "i = " << i << endl;
	return 0;
}

