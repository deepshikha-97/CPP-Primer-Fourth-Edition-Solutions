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
		
	while(cin >> word && !word.empty())
	{
		if(word[0] >= 65 && word[0] <= 90)
		{
			if(oldword == word)
				wordCnt++;
			else
			{
				oldword = word;	
				wordCnt = 1;
			}
		}

		if(wordCnt == 2)
		{
			repeatWord = word;
			break;
		}
	}
	
	if(wordCnt == 2)
	{
		cout << "The word " << repeatWord << " occured " << " twice in succesion" << endl;	
	}
	else
	{
		cout << "No word was repeated" << endl;
	}
		
	return 0;
}

