#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	const size_t array_size = 10;
	int ia[array_size];

	for(size_t ix = 0; ix != array_size; ++ix)
		ia[ix] =  ix;
	for(size_t ix = 0; ix != array_size; ++ix)
		cout << ia[ix] << endl;
	return 0;
}
