#include "main.h"

/**
 * string_toupper - function that return uppercase of string.
 *
 * @str: represents string
 *
 * Return: string upper
*/

char *string_toupper(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
		str ++;
	}
	return (str);
}
