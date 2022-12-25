#include <iostream>
#include <string>
#include <bitset>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::bitset;
using std::vector;

int main()
{
	vector<string> svec(10);
	vector<string> *pvec1 = new vector<string>(10);
	vector<string> **pvec2 = new vector<string>[10];
	vector<string> *pv1 = &svec;
	vector<string> *pv2 = pvec1;
	
	delete svec;
	delete pvec1;
	delete [] pvec2;
	delete pv1; 
	delete pv2;	
	return 0;
}

