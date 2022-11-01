#include <iostream>
#include <vector>
#include <string>
#include <bitset>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::bitset;
using std::endl;

int main()
{
	bitset<16> bitvec1(0xffff);
	cout << "bitvec1: " << bitvec1 << endl;

	bitset<32> bitvec2(0xffff);
	cout << "bitvec2: " << bitvec2 << endl;

	bitset<128> bitvec3(0xffff);
	cout << "bitvec3: " << bitvec3 << endl;

	string strval("1100");
	bitset<32> bitvec4(strval);
	cout << "bitvec4: " << bitvec4 << endl;


	string str("1111111000000011001101");
	bitset<32> bitvec5(str, 5, 4);
	cout << "bitvec5: " << bitvec5 << endl;

	bitset<32> bitvec6(str, str.size()-4);
	cout << "bitvec6: " << bitvec6 << endl;

	bitset<32> bitvec;
	cout << "Defined: bitvec: " << bitvec << endl;
	bool is_set = bitvec.any();
	cout << "bitvec is set or not : " << is_set << endl;

	bool is_not_set = bitvec.none();
	cout << "bitvec is not set or set : " << is_not_set << endl;

	size_t bits_set = bitvec.count();
	cout << "Number of bits set in bitvec: " << bits_set<< endl;

	size_t sz = bitvec.size();
	cout << "Size of bitvec: " << sz << endl;

	for(int index = 0; index != 32; index +=2)
		bitvec[index] = 1;
	cout << "Setting Bitvec by Index method bitvec: " << bitvec << endl;
	
	bitvec.reset();
	cout << "Reseted bitvec: " << bitvec << endl;

	for(int index = 0; index != 32; index +=2)
		bitvec.set(index);
	cout << "Setting Bitvec by SET method bitvec: " << bitvec << endl;
	
	if(bitvec.test(0))
		cout << bitvec[0] << "is on" << endl; 

	if(bitvec[0])
		cout << bitvec[0] << "is on" << endl; 

	bitvec.reset();
	cout << "Reseted bitvec: " << bitvec << endl;

	bitvec.set();
	cout << "Seted bitvec: " << bitvec << endl;

	bitvec.flip(0);
	cout << "Fliping 1st Bit of bitvec: " << bitvec << endl;
	bitvec[0].flip();
	cout << "Fliping 1st Bit of bitvec: " << bitvec << endl;
	bitvec.flip();
	cout << "Fliping 1st Bit of bitvec: " << bitvec << endl;

	unsigned long ulong = bitvec3.to_ulong();
	cout << "ulong = " << ulong << endl;
	
	return 0;
}
