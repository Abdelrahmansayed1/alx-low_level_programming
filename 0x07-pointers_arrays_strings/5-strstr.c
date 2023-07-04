#include "main.h"

/**
 * *_strstr - function that locate a substring
 *
 * @haystack: the stack string
 *
 * @needle: the searched substring
 *
 * Return: pointer to string
*/

char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2, *p3;
	int i, j, flag;

	for (i = 0; i < strlen(haystack); i++)
	{
		if(*p1 == *p2)
		{
			p3 = p1;
			for (j = 0; j < strlen(needle); j++)
			{
				if (*p3 == *p2)
				{
					p3++;
					p2++;
				}
				else
					break;
			}
			p2 = needle;
			if (j == strlen(sub))
			{
				flag = 1;
				return (needle);
			}
		}
		p1++;
	}
}
