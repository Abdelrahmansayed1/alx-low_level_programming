#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - get last element in list
 * @head: ponter list
 *
 * Return: last element in list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!*head || !head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
