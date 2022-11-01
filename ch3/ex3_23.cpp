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
	bitset<64> bitvec(32);
	cout << "Bitvec: " << bitvec << endl;
	
	bitset<32> bv(1010101);
	cout << "BV: " << bv << endl;
	
	string bstr; cin >> bstr; bitset<8> bv1(bstr);
	cout << "BV1: " << bv1 << endl;	
	return 0;
}
