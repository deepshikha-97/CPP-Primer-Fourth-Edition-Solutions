#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;


int main()
{
	vector<int> ivec1;
	vector<int> ivec2;
	int num;
	int prefix_flag = 0;
	char ch;
	
	do
	{
		cin >> num;
		ivec1.push_back(num);
		cout << "Do you want to enter another element: " ;
		cin >>  ch;
	}while(ch == 'y');
	
	while(cin >> num)
	{
		ivec2.push_back(num);
	}

	if(ivec1.size() > ivec2.size())
	{
		for(size_t ix = 0; ix < ivec2.size(); ix++)
		{
			if(ivec1[ix] != ivec2[ix])
			{
				prefix_flag = 0;
				break;
			}
			else
				prefix_flag = 1;
		}
		if(prefix_flag == 1)
		{
			cout << "vector (";
			for(size_t ix = 0; ix < ivec2.size(); ix++)
			{
				cout << ivec2[ix] << " ";
			}
			cout << ") is prefix vector of  (";
			for(size_t ix = 0; ix < ivec1.size(); ix++)
			{
				cout << ivec1[ix] << " ";
			}
			cout << ")" << endl;
		}
		else
			cout << "Vectors are not prefix" << endl;
		
					
	}
	else
	{
		for(size_t ix = 0; ix < ivec1.size(); ix++)
		{
			if(ivec1[ix] != ivec2[ix])
			{
				prefix_flag = 0;
				break;
			}
			else
				prefix_flag = 1;
		}
		if(prefix_flag == 1)
		{
			cout << "vector (";
			for(size_t ix = 0; ix < ivec1.size(); ix++)
			{
				cout << ivec1[ix] << " ";
			}
			cout << ") is prefix vector of  (";
			for(size_t ix = 0; ix < ivec2.size(); ix++)
			{
				cout << ivec2[ix] << " ";
			}
			cout << ")" << endl;
		}
		else
			cout << "Vectors are not prefix" << endl;
	}
	
	
	return 0;
}

