#include "main.h"

/**
 * puts_half - print half of a string, then a new line.
 * @str: input string
 *
 * return: void
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;

	for (i /= 2; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
