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
	vector <int> ivec;
	int value;
	
	while(cin >> value)
	{
		ivec.push_back(value);
	}
		
	int *arr = new int[ivec.size()];
	vector<int>::size_type ix = 0;
	for(size_t i = 0 ; i != (ivec.size()); i++)
	{
		*(arr+i) = ivec[ix];
		cout << *(arr+i) << endl;
		ix++;
	}
	
	delete [] arr;	
	return 0;
}
