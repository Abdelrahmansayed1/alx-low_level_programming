#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - get element at specific index
 * @head: ponter list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
