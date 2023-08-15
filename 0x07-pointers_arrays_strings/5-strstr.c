#include "main.h"

/**
 * _strstr - a function that blocates a string
 * @haystack: input
 * @needle: input
 *
 * return:0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)

	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')

		{
			p++;
			i++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
