#include "main.h"

/**
 * set_bit - sets a bit of a given index to 1
 * @n: pointerto te numer to chang
 * @index: index f the bit t set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
