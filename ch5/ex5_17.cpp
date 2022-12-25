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
	vector<int> ivec;
	int cnt = 10;
	
	while(cnt > 0)
		ivec.push_back(cnt--);

	vector<int>::iterator iter = ivec.begin()-1;
	
	while(iter != ivec.end()-1)
		cout << *++iter << endl;
	return 0;
}
