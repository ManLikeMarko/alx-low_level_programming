#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read txt file prnt to STDOUT
 * @filename: text fle being raed
 * @letters: number of letters to be read
 *
 * Return: actual no. of bytes read and printed
 * 0 if fxn feils
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, ret;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	ret = read(fd, buf, letters);
	if (ret == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	if (write(STDOUT_FILENO, buf, ret) != ret)
	{
		free(buf);
		close(fd);
		return (0);
	}
	if (write(STDOUT_FILENO, buf, ret) != ret)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (ret);
}

