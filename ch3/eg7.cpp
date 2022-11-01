#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string st("The expense of spirit\n");
	cout << "The size of " << st << "is " << st.size()
	     << " characters, including the newline" << endl;

	cout << "If st is empty or not: " << st.empty() << "\n" 
	     << "1 indicate it is empty 0 indicate it it not empty "<< endl;
	return 0;
}
