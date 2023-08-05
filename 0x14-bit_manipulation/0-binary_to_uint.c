/**
 * binary_to_uint - function converts binary to int
 *
 * @b: string
 *
 * Return: number
*/

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num = 2 * num + (b[i] - '0');
	}
	return (num);
}
