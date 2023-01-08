#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
	
int get_response();
int some_value();


int main()
{
	do{
		int ival = get_response();
		if(ival == some_value())
			break;
	}while(ival);	//Error: ival is accessed outside the scope.
	if(!ival)		//Error: ival is accessed outside the scope.
		cout << " " << endl;
	return 0;
}
int get_response()
{
	return 9;
}

int some_value()
{
	return 5;
}
