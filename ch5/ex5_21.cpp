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
	int i;
	
	while(cin >> i)	
		ivec.push_back(i);

	for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++)
	{
		if(ivec[ix]%2 != 0)
			ivec[ix] = 2*ivec[ix];
	}
	cout << "Elements of the vector are: " << endl;
	for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++)
	{
		cout << ivec[ix] << " ";
	}
		cout << "\n";
	return 0;
}
