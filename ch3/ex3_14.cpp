#include <vector>
#include <string>
#include <iostream>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<string> svec;
	string word;	
	while(cin >> word)
		svec.push_back(word);

	for(vector<string>::size_type ix = 0; ix != svec.size(); ix++)
	{
		for(string::size_type iz = 0; iz != svec[ix].size(); iz++)
			svec[ix][iz] = toupper(svec[ix][iz]);
		//svec[ix] = toupper(svec[ix]);
		if( ix !=  0 && ((ix % 8) == 0))
			cout << "\n";
		cout << svec[ix] << " ";
	}
	cout << "\n";	
	return  0;
}
