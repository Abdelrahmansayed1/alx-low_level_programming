#include "main.h"

/**
 * _isalpha - check if c alphabet
 *
 * @c: checks input of function
 *
 * Return: returns 1 if `c` is alphabet otherwise `0` (success)
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}

