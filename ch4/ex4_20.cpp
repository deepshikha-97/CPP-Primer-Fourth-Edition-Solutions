#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	int i = -1;
	const int ic = i;
	const int *pic = &ic;
	//int *const cpi = &ic;
	const int *const cpic=&ic;
	
	i =  ic;
	pic = &ic;
	//cpi = pic;
	pic = cpic;
	//cpic = &ic;
	ic = *cpic;
	return 0;
}
