#include <stdio.h>
/**
 * main - entry point
 * Description: 'Lowr and upper case'
 * Return: always 0
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
	putchar(lowercase);
	lowercase++;
	}

	while (uppercase <= 'Z')
	{
	putchar(uppercase);
	uppercase++;
	}

	putchar('\n');
	return (0);
}
