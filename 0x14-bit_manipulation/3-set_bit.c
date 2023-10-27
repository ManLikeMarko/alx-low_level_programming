#include "main.h"

/**
 * set_bit - a function that sets bit at index
 * @n: a number to the index
 * @index: the index to arrive at
 *
 * Return: 1 if successful and -1 upon error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
