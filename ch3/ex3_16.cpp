#include <vector>
#include <string>
#include <iostream>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<int> ivec(10,42);
	cout << "First:"<<endl;
	for(vector<int>::size_type ix = 0; ix != ivec.size(); ++ix)
		cout << ivec[ix] << endl;
		
	vector<int> ivec1(10);
	cout << "Second:"<<endl;
	for(vector<int>::size_type ix = 0; ix != ivec1.size(); ++ix)
		ivec1[ix] = 42;
	for(vector<int>::size_type ix = 0; ix != ivec1.size(); ++ix)
		cout << ivec1[ix] << endl;
		
	vector<int> ivec2;
	cout << "Third:"<<endl;
	ivec2.push_back(42);
	for(vector<int>::size_type ix = 0; ix != 9; ++ix)
		ivec2.push_back(42);
	for(vector<int>::size_type ix = 0; ix != ivec2.size(); ++ix)
		cout << ivec2[ix] << endl;
		
	return  0;
}
