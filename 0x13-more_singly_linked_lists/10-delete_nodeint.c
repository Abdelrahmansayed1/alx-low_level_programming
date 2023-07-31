#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *delete_nodeint_at_index - delete element
 * @head: ponter list
 * @idx: index
 *
 * Return: new node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *new = NULL;
	unsigned int i;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!temp || !(temp->next))
			return (-1);

		temp = temp->next;
	}

	new = temp->next;
	temp->next = new->next;
	free(new);
	return (1);
}
