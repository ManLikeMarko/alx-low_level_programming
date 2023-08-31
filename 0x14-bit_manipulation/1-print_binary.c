#include "main.h"
/**
 * print_binary - function that prints binary representtion
 * @n: parameter
 *
 * Return: 0 or 1
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = ~(~0U >> 1);

	while (mask > 0)
	{
		_putchar((n & mask) ? '1' : '0');
		mask >>= 1;
	}

	_putchar('\n');
}
