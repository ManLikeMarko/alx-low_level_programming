#include "main.h"

/**
 * print_binary - a function that prints binary representation of a number
 * @n: input
 *
 * Return: void
 *
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			putchar('1');
			printed++;
		}
		else if (printed)
			putchar('0');

	}
	if (!printed)
		putchar('0');

}
