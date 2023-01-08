#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
	

int main()
{
	vector<int> vec(10,2);
	int value;
	vector<int>::iterator iter = vec.begin();
	
	cout << "Enter value to  be searched in the array: ";
	cin >> value;
	while((iter != vec.end()) && (value != *iter))
	{
		++iter;	
	}
	if(iter != vec.end())
		cout << "The value " << value << " is available in the vector" << endl;
	else
		cout << "The value " << value << " is not available in the vector" << endl;
		
	return 0;
}

