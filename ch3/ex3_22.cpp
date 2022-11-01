#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	vector<int> ivec(10, 2);
	vector<int>::iterator mid = ivec.begin() + ivec.size() / 2;
	vector<int>::iterator mid1 = (ivec.begin() + ivec.end()) / 2;
	
	cout << mid << mid1 << endl;	
	return 0;
}

