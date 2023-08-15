#include "main.h"

/**
 * _strspn-function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * return: the number of bytes in the initial segment of 's'
 * consisting entirely of byte from 'accept'
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r] != '\0'; r++)
		{
			if (*s == accept[r])
			{

				n++;
				break;
			}
		}

		if (accept[r] == '\0')
			return (n);

		s++;
	}

	return (n);
}
