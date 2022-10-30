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
	size_t arr_size = 1000;
	int arr[arr_size];
	int i = 0;
	vector <int> ivec;
	
	while(cin >> arr[i])
	{
		ivec.push_back(arr[i]);
		i++;
	}
	
	for(vector <int>::size_type ix = 0; ix != ivec.size(); ix++)
	{
		cout << "vector element: " << ivec[ix] << endl;
	}
	return 0;
}
