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
	string word, temp;	
	int i = 0;
	while(cin >> word)
		svec.push_back(word);

	for(vector<string>::iterator ix = svec.begin(); ix != svec.end(); ix++)
	{
		temp = *ix;
		for(string::size_type iz = 0; iz != temp.size(); iz++)
			temp[iz] = toupper(temp[iz]);
		*ix  =  temp;
		if( i !=  0 && ((i % 8) == 0))
			cout << "\n";
		i++;
		cout << *ix << " ";
	}
	cout << "\n";	
	return  0;
}
