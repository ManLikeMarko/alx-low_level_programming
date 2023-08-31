#include "main.h"
/**
 * flip_bits - number of bits for flipping to get one no. to anothr
 * @n: the first number
 * @m: second number
 *
 * Return: no. of bits you'd need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipper = n ^ m;
	unsigned int count = 0;

	while (flipper)
	{
		if (flipper & 1ul)
		{
			count++;
		}
		flipper = flipper >> 1;
	}
	return (count);
}
