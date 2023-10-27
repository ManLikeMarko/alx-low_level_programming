#include "main.h"

/**
 * clear_bit - a function that set an index to 0
 * @n: the number to index
 * @index: index to arrive at
 *
 * Return: 1 if successful and -1 upon error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
	{
		*n ^= 1L << index;
	}
	return (1);
}
