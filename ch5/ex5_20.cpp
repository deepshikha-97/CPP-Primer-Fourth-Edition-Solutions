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
	int i, j;
	cout << "Enter pair of numbers to know smaller: ";	
	cin >> i >> j;
	
	int smaller = i < j ? i : j;
	
	cout << "Smaller Number is " << smaller << endl;
	return 0;
}
