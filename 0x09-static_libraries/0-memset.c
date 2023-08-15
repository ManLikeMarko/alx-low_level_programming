#include "main.h"

/**
 * _memset - sets a block of memory to a specific value
 * @s: the starting address of the memory we are filling
 * @b: the desired value of the destination
 * @n: the no.of bytes that we're changing
 *
 * return: changed array with the new value
 */

char *_memset(char *s, char b, unsigned int n)

{
	int i = 0;

	while (n > 0)

	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
