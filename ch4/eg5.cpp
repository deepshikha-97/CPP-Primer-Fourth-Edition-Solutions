#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	int ival = 1024, ival2 = 2048;
	int *pi = &ival, *pi2 = &ival2;
	cout << *pi << " " << *pi2 << endl;
	pi = pi2; 
	cout << *pi << " " << *pi2 << endl;
	
	int &ri = ival, &ri2 = ival;
	cout << ri << " " << ri2 << endl;
	ri = ri2;
	cout << ri << " " << ri2 << endl;
	
	return 0;
}
