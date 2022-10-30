#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> svec;
	string line;
	int len;
	
	while(getline(cin,line))
	{
		svec.push_back(line);
	}
	
	for(vector<int>::size_type ix = 0; ix != svec.size(); ++ix)
	{
		len = svec[ix].size();
		char *pc =  new char[len + 1];
		for(int i = 0; i < len; i++)
			*(pc + i) = svec[ix][i];
		//strcpy(pc, &svec[ix]);
		for(int i = 0; i < len; i++)
			cout << *(pc+i);
		cout << "\n";
		delete [] pc;
	}
	return 0;
}
