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
	int *pa = new int[10];
	delete [] pa;
	return 0;
}
