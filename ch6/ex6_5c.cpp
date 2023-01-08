#include <iostream>

using std::cout;
using std::endl;

int get_value();
int main()
{
	if(int ival = get_value())
	//Correction: one opening curly braces should be included.
		cout << "ival = " << ival << endl;
	if(!ival)		//Error: ival can be accessed only inside the above if scope. to use here this if should come inside the above if.
		cout << "ival = 0\n";
	//Correction: one closing curly braces should be included.
}

int get_value()
{
	return 7;
}

