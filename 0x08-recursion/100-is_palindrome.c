#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int length = find_length(s);
	if (length <= 1)

		return (1);

	return (is_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - checks if a substring is a palindrome
 * @s: input string
 * @start: starting index of substring
 * @end: ending index of substring
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)

		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen - calculates the length of a string
 * @s: input string
 * Return: length of string
 */
int find_length(char *s)
{
	int length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
