#include "main.h"

/**
 * is_palindrome - function that returns 1 if a string is a palindrome and 0 if not
 *
 * @s: string
 *
 * Return: 1 if palindrome 0 if not
*/
int last_index(char *s);
int check(char *s, int start, int end, int mod);

int is_palindrome(char *s)
{
	int end = last_index(s);
	return (check(s, 0, end - 1, end % 2));
}

int last_index(char *s)
{
	int n = 0;
	if (*s == '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return(check(s, start + 1, end - 1, mod));
}
