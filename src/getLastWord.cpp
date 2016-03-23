/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
//time complexity O(n)
#include <stdlib.h>

char * get_last_word(char * str){
	if (str == NULL)
		return str;
	else
	{
		int i = 0, flag = 0;
		int len = 0, size = 0;
		char *arr;
		while (str[i] != '\0')
		{
			len++;
			i++;
		}
		i = 0;
		do
		{
			if (str[len] == ' ' && flag == 0)
				len--;
			else if (str[len] == ' ' && flag == 1)
				break;
			else
			{
				size++;
				len--;
				flag = 1;
			}
		} while (len >= 0);
		arr = (char*)malloc(sizeof(char)*size);
		len = len + 1;
		for (; i <= size; i++)
			arr[i] = str[len++];
		arr[i] = '\0';
		return arr;
	}
}
