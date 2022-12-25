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

int main()
{
	vector<string> *svec;
	string str;
	
	while(getline(cin,str))
	{
		(*svec).push_back(str);
		cout << str.size() << endl;
	}

	vector<string>::iterator iter = (*svec).begin();
	
//	while(iter != svec->end())
//		cout << *iter++ <<" Size: " << (*iter).size() << endl;

	return 0;
}
