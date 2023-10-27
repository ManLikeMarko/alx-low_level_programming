#include "main.h"

/**
 * get_bit - a function that gtes bit at index
 * @n: number to index
 * @index: the parameter to arrive at
 *
 * Return: the bit state or -1 upon error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
