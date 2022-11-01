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
	vector<int> ivec;
	int value;
	cout<< "Enter number:";
	while(cin >> value)
		ivec.push_back(value);
	
	cout << "\n Sum of adjacent elements are :" << endl;
	for(vector<int>::size_type ix =  0; ix != ivec.size(); ++ix)
	{
		if(ivec[ix]%2 == 0)
		{
			if(ix == 0)
				cout << ivec[ix+1] << endl;
			else if(ix > 0 && (ix < (ivec.size()-1)))
				cout << ivec[ix-1]+ivec[ix+1] << endl;
			else if(ix == (ivec.size()-1))
				cout << ivec[ix-1]<< endl;
		}
		else
		{
			cout << "An odd number is present" << endl;
			cout  << "The last element is " << ivec[ivec.size()-1] << endl;
			break;
		}

	}
	cout << "Sum of first and last element, second and second last element\n" << endl;
	for(vector<int>::size_type ix =  0; ix != (ivec.size())/2; ix++)
	{
			cout << ivec[ix] + ivec[ivec.size()-1-ix] << endl;
	}
		
	return  0;
}
