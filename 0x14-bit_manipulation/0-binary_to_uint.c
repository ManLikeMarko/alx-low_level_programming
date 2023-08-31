#include "main.h"
/**
 * binary_to_uint - a function that converts a binay number to an unisgned int
 * @b: pointer to a string
 *
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	char current_char;
	unsigned int result = 0;

	while ((current_char = *b) != '\0')
	{
		if (current_char != '0' && current_char != '1')
		{
			return (0);
		}
		result = (result << 1) | (current_char - '0');
		b++;
	}
	return (result);
}
int main(void)
{
	const char *binary_str = "1101010";
	unsigned int result = binary_to_uint(binary_str);

	if (result == 0)
	{
		printf("invalid binary string\n");
	}
	else
	{
		printf("decimal value %u\n", result);
	}
	return (0);
}
