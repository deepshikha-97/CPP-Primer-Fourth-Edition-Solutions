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
class item
{
	public:
	int ival;
};

int main()
{
	item obj;
	item* ptr;
	ptr = &obj;
	vector<int> vec(2,1);
	int ival=0, jval=1, kval = 2;


	(ptr->ival)= 1;
	
	if(ptr->ival != 0)
		cout<<"Correct Expression: a\n" << endl;
	
	if(ival != jval < kval)
		cout<<"Correct Expression: b\n" << endl;
	
	if(ptr != 0 && *ptr++)
		cout<<"Correct Expression: b\n" << endl;
	
	if(ival++ && ival)
		cout<<"Correct Expression: d\n" << endl;
	ival = 0;

	if(vec[ival++] <= vec[ival])
		cout<<"Correct Expression:case 1 e\n" << endl;
	else
		cout<<"Correct Expression:case 2 e\n" << endl;
	
	
	return 0;
}

