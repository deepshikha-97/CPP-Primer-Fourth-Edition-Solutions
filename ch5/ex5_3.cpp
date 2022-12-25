#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int num;
	
	cout << "Enter a number to determine it is even or odd: ";
	cin >> num;
	if((num % 2) == 0)
		cout << num << " is even number." << endl;
	else
		cout << num << " is odd number." << endl;
		
	return 0;
}

