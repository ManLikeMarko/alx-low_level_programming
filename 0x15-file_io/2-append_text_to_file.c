#include "main.h"

/**
 * _strlen - prints length of string
 * @s: string input
 *
 * Return: len of str
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
 * append_text_to_file - appends text atb the end of file
 * @filename: name of file to be created
 * @text_content: a null terminated strn
 *
 * Return: 1 on success, -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_data;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	file_data = open(filename, O_WRONLY | O_APPEND);
	if (file_data == -1)
		return (-1);
	if (len)
		bytes = write(file_data, text_content, len);
	close(file_data);
	return (bytes == len ? 1 : -1);
}
