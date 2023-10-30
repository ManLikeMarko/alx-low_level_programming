#include "main.h"

/**
 * _strlen = a function that prints the length of a string
 * @s: a string input
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i;

	if (!s)
		return (0);
	while (*s++)
	{
		i++;
	}
	return (i);
}

/**
 * create_file - a function tht creates a file
 * @filename: name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 of failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int file_data;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	file_data = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_data == -1)
		return (-1);
	if (len)
		bytes = write(file_data, text_content, len);
	close(file_data);
	return (bytes == len ? 1 : -1);
}
