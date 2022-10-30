#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	const size_t array_size = 7;
	int equal = 1;
	int ia1[] = {0, 1, 2, 3, 4, 5, 6};
	int ia2[array_size];
	int ia3[] = {0, 5, 4, 3, 1, 5, 6};
	vector<int> ivec(7, -1);
	vector<int> ivec1(ivec);
	vector<int> ivec2(7, 2);

	for(size_t ix = 0; ix != array_size; ++ix)
		ia2[ix] =  ia1[ix];

	for(size_t ix = 0; ix != array_size; ++ix)
	{
		if(ia1[ix] != ia2[ix])
		{
			equal=0;
			break;
		}
	}
	if(equal == 1)
		cout << "ia1 and ia2 array are equal" << endl;
	else
		cout << "ia1 and ia2 array are not equal" << endl;
	for(size_t ix = 0; ix != array_size; ++ix)
	{
		if(ia1[ix] != ia3[ix])
		{
			equal=0;
			break;
		}
	}
	if(equal == 1)
		cout << "ia1 and ia3 array are equal" << endl;
	else
		cout << "ia1 and ia3 array are not equal" << endl;
	
	if(ivec == ivec1)
		cout << "ivec and ivec1 vector are eqaul" << endl;
	else
		cout << "ivec and ivec1 vector are not  eqaul" << endl;
	if(ivec == ivec2)
		cout << "ivec and ivec2 vector are eqaul" << endl;
	else
		cout << "ivec and ivec2 vector are not  eqaul" << endl;
	return 0;
}
