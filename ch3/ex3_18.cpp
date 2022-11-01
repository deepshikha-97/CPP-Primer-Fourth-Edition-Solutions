#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	vector<int> ivec(10, 2);

	for(vector<int>::iterator ix = ivec.begin(); ix != ivec.end(); ix++)
	{
		*ix = (*ix) * 2;
		cout << *ix << endl;
	}
	
	return 0;
}

