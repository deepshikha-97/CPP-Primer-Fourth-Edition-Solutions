#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
	

int main()
{
	char ch = 'y';
	
	do
	{
		string str1, str2, str3;
		getline(cin, str1);
		getline(cin, str2);
		if(str1 > str2)
			cout << "The string: "<< str2 << " is lexicographically less than string: " << str1 << endl;
		else if(str1 < str2)
			cout << "The string: "<< str1 << " is lexicographically less than string: " << str2 << endl;
		else
			cout << "Both are equal" << endl;
		cout << "\nDo you want to do any other comparison: ";
		cin >> ch;
		getline(cin,str3);	
	}while(ch == 'y');
	return 0;
}

