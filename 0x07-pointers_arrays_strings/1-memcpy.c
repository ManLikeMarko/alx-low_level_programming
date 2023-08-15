#include "main.h"

/**
 * _memcpy - function to copy the memory locatin
 * @dest: the memory where it's copied
 * @src: the file source
 * @n: number of bytes
 *
 * return: the copied momery with n chnages
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int r = 0;

	while (r < n)
	{
		dest[r] = src[r];
		r++;
	}
	return (dest);
}
