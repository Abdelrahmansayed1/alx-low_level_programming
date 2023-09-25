#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h11;
	dlistint_t *h2;
	unsigned int i;

	h11 = *head;

	if (h11 != NULL)
		while (h11->prev != NULL)
			h11 = h11->prev;

	i = 0;

	while (h11 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h11->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h11->next;

				if (h11->next != NULL)
					h11->next->prev = h2;
			}

			free(h11);
			return (1);
		}
		h2 = h11;
		h11 = h11->next;
		i++;
	}

	return (-1);
}
