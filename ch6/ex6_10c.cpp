#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	int ival;
	int oddcnt = 0, evencnt = 0;
	while(cin >> ival)
	{
		switch(ival)
		{
			case 1: case 3: case 5: case 7: case 9: // Commas are invalid it should be written as above mentioned
				oddcnt++;
				break;
			case 2: case 4: case 6: case 8: case 10:
				evencnt++;
				break;
		}
	}
	cout << "Odd Count: " << oddcnt << " Even Cnt: " << evencnt << endl;;
}

