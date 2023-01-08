#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char ch;
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, newlineCnt = 0, tabCnt = 0;
	int ffCnt = 0, flCnt = 0, fiCnt = 0, fCnt = 0;
	
	while(cin.get(ch)){
		switch(ch){
			case 'a':
			case 'A':
				++aCnt;
				fCnt = 0;
				break;
			case 'e':
			case 'E':
				++eCnt;
				fCnt = 0;
				break;
			case 'i':
			case 'I':
				++iCnt;
				if(fCnt == 1)
					fiCnt++;
				else
					fCnt =  0;
				break;
			case 'o':
			case 'O':
				++oCnt;
				fCnt = 0;
				break;
			case 'u':
			case 'U':
				++uCnt;
				fCnt = 0;
				break;
			case '\n':
				++newlineCnt;
				fCnt = 0;
				break;
			case ' ':
				++spaceCnt;
				fCnt = 0;
				break;
			case '\t':
				++tabCnt;
				fCnt = 0;
				break;
			case 'f':
				++fCnt;
				if(fCnt == 2)
				{
					ffCnt++;
					fCnt = 0;
				}
				break;
			case 'l':
				if(fCnt == 1)
					flCnt++;
				else
					fCnt =  0;
				break;
			default:
				fCnt = 0;
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
	 << "Number of Space: \t" << spaceCnt << '\n'
	 << "Number of fl: \t" << flCnt << '\n'
	 << "Number of ff: \t" << ffCnt << '\n'
	 << "Number of fi: \t" << fiCnt << endl;

	return 0;
}
