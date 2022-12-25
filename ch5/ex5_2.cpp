#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int exp1, exp2, exp3, exp4;

	exp1 = -30 * 3 + 21 / 5;
	exp2 = -30 + 3 * 21 / 5;
	exp3 = 30 / 3 * 21 % 5;
	exp4 = -30 / 3 * 21 % 4;
	cout << exp1 << " " << exp2 << " " << exp3 << " " << exp4 << endl;	
	
	return 0;
}

