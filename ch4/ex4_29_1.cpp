#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	const char *pc = "a very long literal string";
	const size_t len = strlen(pc + 1);
	
	for(size_t ix = 0; ix != 1000000; ++ix){
		char *pc2 = new char[len + 1];
		strcpy(pc2, pc);
		if(strcmp(pc2, pc))
			;
		delete [] pc2;	
	}
	return 0;
}
