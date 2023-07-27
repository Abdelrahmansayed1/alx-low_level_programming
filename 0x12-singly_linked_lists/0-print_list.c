#include "lists.h"
/**
 * _strlen - return the length of string
 * @s: the string
 *
 * Return: int
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}
	while (s++)
	{
		i++;
	}
	return (i);
}

/**
 * print_list - print list items
 *
 * @*h: list
 *
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;
	
	while (h)
	{
		if (h -> str == NULL)
			printf("[0] (nil)");
		else
			printf("[%i] %s", _strlen(h->str), h->str);
		h = h ->next;
		i++;
	}
	return (i);
}
