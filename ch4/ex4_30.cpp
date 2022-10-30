#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{	
	const char *s1 = "a very long literal string";
	const char *s2 = "Add more to the string";
	
	char new_str[strlen(s1)+strlen(s2)+2];
	
	strcat(new_str, s1);
	strcat(new_str, " ");
	strcat(new_str, s2);
	cout << new_str << endl;
	
	string str1("a very long literal string");
	string str2("Add more to the string");
	str1 = str1 +" " + str2;
	cout << str1 << endl;
	
	return 0;
}
