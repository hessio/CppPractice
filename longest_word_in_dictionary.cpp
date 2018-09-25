#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>

int main()
{
	std::string S = "abppplee";
	std::string D[] = {"able", "ale", "apple", "bale", "kangaroo"};

	std::map<std::string, int> character_count;
	
	auto max_count = 0;
	std::string answer = "";

	for ( auto word : D )
	{
		character_count[word] = 0;
		for( auto c : S )
		{
			for ( auto character : word )
			{
				if ( character == c )
				{
					++character_count[word];
					if( character_count[word] == word.length() && word.length() > max_count )
					{
						max_count = word.length();
						answer.assign(word);
					}
				}
			}
		}
	}

	std::cout << answer;
}