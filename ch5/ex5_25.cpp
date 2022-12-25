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
		int next;
};

int main()
{
	item obj;
	item *ptr;
	
	ptr = &obj;
	char ch;
	int bp = 3;
	string buf = "word";	
	ptr->next = 0; 
	
	if(!ptr == ptr->next)
		cout << "True\n" << endl;
	ch = buf[bp++] != '\n';
	cout << ch <<" "<< (int) ch <<  endl;
	return 0;
}

