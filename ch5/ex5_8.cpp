#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
	int a, b, c,  d;
	cout << "Enter a, b, c, and d: " << endl;
	cin >> a >> b >> c >> d;
	
	if((a>b) && (b>c) && (c>d))
		cout << "Order is " << "a>b>c>d" << endl;
	else
		cout << "Not in order" << endl;
	return 0;
}

