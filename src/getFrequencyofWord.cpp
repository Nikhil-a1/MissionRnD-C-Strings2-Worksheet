/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/
//time complexity O(n)
#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	if (str == NULL || word == NULL)
		return 0;
	else
	{
		int  cnt = 0, len = 0, i = 0, q = 0;
		int flag = 0;
		while (word[i] != '\0')
		{
			i++;
			len++;
		}
		i = 0;
      while (str[i] != '\0')
		{
			if (word[q] == str[i])
				q++;
			else if (str[i] != word[q])
			{
				if (str[i - 1] == ' ' && flag == 0)
				{
					i = i - 1;
					flag = 1;
				}
				else if (str[i - 1] == ' ' && flag == 1)
					flag = 0;
				q = 0;
			}
			if (q == len)
			{
				cnt++;
				q = 0;
				if (str[i] != ' ')
					i = i - 1;
			}
			i++;
		}
		return cnt;
	}
}
//int count_word_int_str_way_2_recursion(char *str, char *word){
//	return 0;
//}

