#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;


int main()
{
	string word, oldword, repeatWord;
	int wordCnt = 0, max_wordCnt=0; 
		
	while(cin >> word)
	{
		if(oldword == word)
			wordCnt++;
		else
		{
			oldword = word;	
			wordCnt = 1;
		}

		if(wordCnt > max_wordCnt)
		{
			max_wordCnt = wordCnt;
			repeatWord = word;
		}
	}
	
	if(max_wordCnt > 1)
	{
		cout << "The word " << repeatWord << " occured " << max_wordCnt << " times." << endl;	
	}
	else
	{
		cout << "No word was repeated" << endl;
	}
		
	return 0;
}

