#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1, s2;
	
	cout << "Enter First String: ";	
	cin >> s1;
	cout << "Enter Second String: ";	
	cin >> s2;
	
	if(s1 == s2)
		cout << "Both the strings are equal\n";
	else if(s1 > s2) 
		cout << s1 << " is larger than " << s2 << endl;
	else 
		cout << s2 << " is larger than " << s1 << endl;

	if(s1.size() == s2.size())
		cout << "Both the strings are having equal size\n";
	else if(s1.size() > s2.size())
		cout << s1 << " is longer than " << s2 << endl;
	else
		cout << s2 << " is longer than " << s1 << endl;
	return 0;
}
