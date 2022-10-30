#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	const size_t arr_sz = 5;
	int int_arr[arr_sz] = {0, 1, 2, 3, 4 };
	
	cout << "Array value before setting to zero:" << endl;
	for(int *pbegin = int_arr, *pend = int_arr+arr_sz; pbegin != pend; ++pbegin)
	{
		cout << *pbegin << ' ';
	}
		cout << endl;
	for(int *pbegin = int_arr, *pend = int_arr+arr_sz; pbegin != pend; ++pbegin)
	{
		*pbegin = 0;
	}
		cout << endl;
	cout << "Array value after setting to zero:" << endl;
	for(int *pbegin = int_arr, *pend = int_arr+arr_sz; pbegin != pend; ++pbegin)
	{
		cout << *pbegin << ' ';
	}
		cout << endl;
	return 0;
}
