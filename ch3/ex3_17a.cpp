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
	int value,i = 0;
	cout<< "Enter number:";
	while(cin >> value)
		ivec.push_back(value);
	
	cout << "\n Sum of adjacent elements are :" << endl;
	for(vector<int>::iterator ix =  ivec.begin(); ix != ivec.end(); ++ix)
	{
		if((*ix)%2 == 0)
		{
			if(ix == ivec.begin())
				cout << *(ix+1) << endl;
			else if(ix > ivec.begin() && (ix < (ivec.end()-1)))
				cout << *(ix-1)+(*(ix+1)) << endl;
			else if(ix == (ivec.end()-1))
				cout << *(ix-1)<< endl;
		}
		else
		{
			cout << "An odd number is present" << endl;
			cout  << "The last element is " << *(ivec.end()-1) << endl;
			break;
		}

	}
	cout << "Sum of first and last element, second and second last element\n" << endl;
	for(vector<int>::iterator ix = ivec.begin(); ix != (ivec.begin()+ivec.size()/2); ix++)
	{
	      	cout << (*ix) + (*(ivec.end()-i-1)) << endl;
		i++;
	}
		
	return  0;
}
