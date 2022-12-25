#include <iostream>
#include <string>
#include <bitset>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::bitset;

int main()
{
	bitset<30> bitset_quiz1;
	cout << "Old Value: " << bitset_quiz1 << endl;
	
	bitset_quiz1[27] = 1;
	cout << "New Value: " << bitset_quiz1 << endl;
	return 0;
}

