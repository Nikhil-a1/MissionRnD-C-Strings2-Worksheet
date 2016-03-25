/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>

char * get_sub_string(char *str, int i, int j)
{
	char* s;
	int len = 0,k=0, size = 0;
	if (str == NULL)
		return s=NULL;
	else if (i > j)
		return s=NULL;
	else
	{
		while (str[k] != '\0')
		{
			k++;
			len++;
		}
		k = 0;
		if (i >= 0 && j >= 0 && i < len && j < len && i < j)
		{
			size = j - i;
			s = (char*)malloc(sizeof(char)*size);
			for (; i <= j; i++)
				s[k++] = str[i];
			s[k] = '\0';
			return s;
		}
		else if (i == j && i >= 0 && j >= 0 && i < len && j < len)
		{
			s = (char*)malloc(sizeof(char) * 2);
			s[k++] = str[i];
			s[k] = '\0';
			return s;
		}
		else if (i < 0 && j < 0)
			return s = NULL;
		else if (i >= len && j>=len)
			return s = NULL;
		else if (i >= 0 && i < len && j < 0)
		{
			size = len - i;
			s = (char*)malloc(sizeof(char)*size);
			for (; i < len; i++)
			{
				*s = str[i];
				s++;
			}
			*s = '\0';
			return s;
		}
		else if (i < 0 && j >= 0 && j < len)
		{
			size = j;
			s = (char*)malloc(sizeof(char)*size);
			for (i = 0; i <= j; i++)
				s[i] = str[i];
			s[i] = '\0';
		}
	}

}
