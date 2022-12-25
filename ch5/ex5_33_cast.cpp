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
	int ival;
	double dval;
	const string *ps;
	char *pc;
	void *pv;
	
	pv = reinterpret_cast<void*>(ps);
	ival = static_cast<int> (*pc);
	pv = &dval;
	pc = reinterpret_cast<char*>(pv);
	
	return 0;
}

