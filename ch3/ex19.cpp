#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> ivec(10, -1);

	for(vector<int>::size_type ix = 0; ix != ivec.size(); ++ix)
	{
		cout << ivec[ix]<< endl;
		ivec[ix] = 0;
		cout << ivec[ix]<< endl;

	}
	return 0;
}
