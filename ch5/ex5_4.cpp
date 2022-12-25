#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	short short_value = 32767;
	short ival = 1;
	
	short_value += ival;
	cout << "Exp1: " << short_value << endl;

	char val = 127;
	val++;
	cout << "Exp2: " <<(int) val << endl;

	short_value += ival;
	cout << "Exp3: " << short_value << endl;
	
	return 0;
}

