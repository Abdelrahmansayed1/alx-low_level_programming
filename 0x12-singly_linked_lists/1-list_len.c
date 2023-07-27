#include <stlib.h>
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
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
