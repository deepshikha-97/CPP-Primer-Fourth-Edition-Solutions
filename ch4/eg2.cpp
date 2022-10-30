#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	const size_t array_size = 7;
	int ia1[] = { 0, 1, 2, 3, 4, 5, 6};
	int ia2[array_size];

	for(size_t ix = 0; ix != array_size; ++ix)
		ia2[ix] =  ia1[ix];
	for(size_t ix = 0; ix != array_size; ++ix)
		cout << ia2[ix] << endl;
	return 0;
}
