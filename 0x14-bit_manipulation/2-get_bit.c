#include "main.h"

/**
 * get_bit - returs th value of a bt at an inex in te
 * decimal
 * @n: num to seach
 * @index: idx of the bit
 *
 * Return: vlue of thebit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

