#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	const char *cp = "hello";
	int cnt=0;
	
	//while(cp) {++cnt; ++cp;}
	while(*cp) {++cnt; ++cp;}
	cout << cnt << endl;
	return 0;
}
