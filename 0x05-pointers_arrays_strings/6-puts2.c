#include "main.h"

/**
 * puts2 - prints every other chracter of a string, s
 * tarting with the firt character, followed by a new line.
 *
 * @str: imput string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
