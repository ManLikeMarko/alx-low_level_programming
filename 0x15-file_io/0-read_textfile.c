#include "main.h"
/**
 * read_textfile - function that reads textfile and prints to POSIX
 * @filename: list

 *
 * Returns: 1 or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, ret;
	char buf[BUF_SIZE + 1];
	size_t cpt = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, 0_RDONLY);

	if (fd == -1)
		return (0);

	while ((ret = read(fd, buf, letters)))
	{
		buf[ret] = '\0';
		printf("%s", buf);
		cpt += ret;
	}

	close(fd);
	return (cpt);
}
