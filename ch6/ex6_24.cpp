#include <iostream>
#include <vector>
#include <bitset>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::bitset;


int main()
{
	bitset<65> b1;		//ulong can be of 8 bytes it is exceeding 8 bytes
	b1.set();
	try{
		cout << b1 << " " << b1.to_ulong() << endl;
	}catch(std::overflow_error){
		cout << b1 << " is more than 8 byte." << endl;
	}
	
	return 0;
}
