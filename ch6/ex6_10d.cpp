#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	int ival=512, jval=1024, kval=4096;	//Error Correction: 1 comma is added after ival = 512
	int bufsize;
	int swt;
	while(cin >> swt)
	{
		switch(swt)
		{
		//Error: ival, jval, and kval are variable.
			case ival:
				bufsize = ival * sizeof(int);
				break; 
			case jval:
				bufsize = jval * sizeof(int);
				break; 
			case kval:
				bufsize = kval * sizeof(int);
				break; 
		}
	}
}

