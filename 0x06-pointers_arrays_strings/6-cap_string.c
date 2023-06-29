#include "main.h"

/**
 * cap_string - function that capitalize string.
 *
 * @str: represents string 1
 *
 * Return: always concatanted string (success)
*/
int isDelimeter(char c)
{
	int i;
	char delimeter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == delimeter[i])
			return (1);
	}
	return (0);
}

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}


char *cap_string(char *str)
{
	int i;
	char *ptr = s;
	int foundDelimit = 1;

	while (str[i] != '\0')
	{
		if (isDelimeter(*str))
		{
			foundDelimit = 1;
		}
		else if (isLower(*s) && foundDelimit)
		{
			str[i] -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		i++;
	}
	return (ptr);
}
