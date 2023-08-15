#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reverse, followed with a new line
 * @s: input string
 *
 * return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
