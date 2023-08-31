#include "main.h"
/**
 * set_bit - sets bit at index
 * @n: number to index
 * @index: index to arrive at
 *
 * Return: 1 if success, -1 if unsuccessful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
