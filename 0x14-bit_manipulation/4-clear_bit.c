#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: the number to change
 * @index: index
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizefof(n) * 8)
		return (-1);

	if(*n & 1L << index)
		*n ^= 1l << index;
	return (1);
}
