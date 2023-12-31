#include <stdlib.h>
#include "lists.h"

/**
 * list_len - print list length
 *
 * @h: list
 *
 * Return: length of list
*/

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
