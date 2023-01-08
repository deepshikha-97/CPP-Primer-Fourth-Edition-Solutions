#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
	
int get_response();


int main()
{
	do{
	}while(int ival = get_response());	//Error: Variable declaration in the condition statement.
	return 0;
}
int get_response()
{
	return 9;
}

