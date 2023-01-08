#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int ival = 5;
	int aCnt=0, eCnt=0, iouCnt=0;	
	while(cin >> ival)
	{
		switch(ival)
		{
			case 'a': aCnt++;
			case 'e': eCnt++;
			default: iouCnt++;
		}
	}
	cout << aCnt << endl;
	return 0;
}
