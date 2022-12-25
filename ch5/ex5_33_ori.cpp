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
	
	pv = (void*)ps;
	ival = int (*pc);
	pv = &dval;
	pc = (char *) pv;
	
	return 0;
}

