/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/
//time complexity O(n)
#include <stddef.h>


void count_vowels_and_consonants(char *str, int *consonants, int *vowels){
	if (str == NULL)
	{
		*consonants = 0;
		*vowels = 0;
	}
	else
	{
		int  vowel_count = 0, conso_count = 0, i = 0, diff = 'a' - 'A';
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i]+diff;
			i++;
		}
		i = 0;
		while (str[i] != '\0')
		{
			switch (str[i])
			{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':vowel_count++;
				break;
			default:if (str[i] != ' ' && str[i]>='a' && str[i]<='z')
				conso_count++;
				break;
			}
			i++;
		}
		*vowels = vowel_count;
		*consonants = conso_count;
	}
}