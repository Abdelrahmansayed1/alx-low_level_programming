#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get element at specific index
 * @head: ponter list
 * @index: int
 *
 * Return: element at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;


	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	if (head)
		return (head);
	else
		return (NULL);
}
