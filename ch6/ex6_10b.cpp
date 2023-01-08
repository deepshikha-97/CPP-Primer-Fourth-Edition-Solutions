#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
int get_value();

int main()
{
	int ival = 0;
	vector<int> ivec(10);
	cin >> ival;
	switch(ival)
	{
		case 1:
		{			//Braces are added to rectify error.
			int ix = get_value();
			ivec[ix] = ival;
			break;
		}
		default:
		{
			int ix;		//As above declaration ix is declared in block statement so it can not be used here. That's why it is declared once again.
			ix =  ivec.size()-1;
			ivec[ix] = ival;
		}
	}
	for(vector<int>::size_type ix = 0; ix != ivec.size(); ++ix)
		cout << ivec[ix];
	return 0;
}

int get_value()
{
	return 2;
}
