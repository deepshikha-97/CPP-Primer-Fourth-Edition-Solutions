#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char ch;
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, newlineCnt = 0, tabCnt = 0;
	
	while(cin.get(ch)){
		switch(ch){
			case 'a':
			case 'A':
				++aCnt;
				break;
			case 'e':
			case 'E':
				++eCnt;
				break;
			case 'i':
			case 'I':
				++iCnt;
				break;
			case 'o':
			case 'O':
				++oCnt;
				break;
			case 'u':
			case 'U':
				++uCnt;
				break;
			case '\n':
				++newlineCnt;
				break;
			case ' ':
				++spaceCnt;
				break;
			case '\t':
				++tabCnt;
				break;
		}	
	}
	cout << "\nNumber of vowel a: \t" << aCnt << '\n'
	 << "Number of vowel e: \t" << eCnt << '\n'
	 << "Number of vowel i: \t" << iCnt << '\n'
	 << "Number of vowel o: \t" << oCnt << '\n'
	 << "Number of vowel u: \t" << uCnt << '\n'
	 << "Number of Tab: \t" << tabCnt << '\n'
	 << "Number of New Line: \t" << newlineCnt << '\n'
	 << "Number of Space: \t" << spaceCnt << endl;

	return 0;
}
