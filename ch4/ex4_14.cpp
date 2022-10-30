#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	int ival = 1, ival2 = 2;
	int *pi = &ival, *pi2 = &ival2, *pi3 = &ival;
	
	cout << "ival:" << ival << " ival2 " << ival2 << endl;
	cout << "pi value:" << *pi << " pi2 value " << *pi2 << " pi3 value " << *pi3<< endl;
	pi = pi2;
	cout << "ival:" << ival << " ival2 " << ival2 << endl;
	cout << "pi value:" << *pi << " pi2 value " << *pi2 << " pi3 value " << *pi3<< endl;
	
	*pi3 = *pi2;
	cout << "ival:" << ival << " ival2 " << ival2 << endl;
	cout << "pi value:" << *pi << " pi2 value " << *pi2 << " pi3 value " << *pi3<< endl;
	return 0;
}
