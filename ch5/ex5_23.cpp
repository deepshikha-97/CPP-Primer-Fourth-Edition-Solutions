#include <iostream>
#include <string>
#include <bitset>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::bitset;
using std::vector;

int main()
{
	int x[10];
	int *p = &x[5];
	
	cout << sizeof(x)<< " " << sizeof(*x) << endl;
	cout << sizeof(x)/sizeof(*x) << endl;
	cout << sizeof(p)<<" "<< sizeof(*p) << endl;
	cout << sizeof(p)/sizeof(*p) << endl;

	return 0;
}
