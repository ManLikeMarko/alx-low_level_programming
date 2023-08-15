#include "main.h"

/**
 * _ strchr - entry point
 * @s: input
 * @c: input
 *
 * return: always 0
 */

char *_strchr(char *s, char c)

{
	int i = 0;

	while (s[i] != '\0')
	{

		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
