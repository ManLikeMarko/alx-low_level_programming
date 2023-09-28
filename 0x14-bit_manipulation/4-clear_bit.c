#include "main.h"

/**
 * clear_bit - setsthe valu of a givn bit to 0
 * @n: pointeto he number to chang
 * @index: index ofthe bit toclear
 *
 * Return: 1 forsuccess, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (-1);
}

