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
	vector<int> ivec;
	int value;
	
	while(cin>>value)
	{
		ivec.push_back(value);
	}
	
	vector<int>::size_type sz = ivec.size();
	cout << sz << endl;
	int *arr = new int[(int) sz];
	int j = 0;
	
	for(vector<int>::size_type i = 0; i != ivec.size(); i++)
	{
		*(arr+j) = ivec[i];
		j++;
	}
	
	for(int i = 0; i != sz; i++)
		cout << ivec[i] << " ";
	
	cout << "\n";

	for(int i = 0; i != sz; i++)
		cout << arr[i] << " ";
	
	cout << "\n";
	
	delete [] arr;	
	return 0;
}
