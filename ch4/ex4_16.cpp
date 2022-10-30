#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	int i = 42, j = 1024;
	int *p1 = &i, *p2 = &j;
	cout <<"i = " << i << " j = " << j << " *p1 = " << *p1 << " *p2 = " << *p2 << endl;
	*p2 = *p1 * *p2;
	cout <<"i = " << i << " j = " << j << " *p1 = " << *p1 << " *p2 = " << *p2 << endl;
	*p1 *= *p1;
	cout <<"i = " << i << " j = " << j << " *p1 = " << *p1 << " *p2 = " << *p2 << endl;

	return 0;
}
