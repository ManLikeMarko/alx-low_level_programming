#include "main.h"
/**
 * read_textfile - function that reads textfile and prints to POSIX
 * @filename: list
 * @letters: bytes to read
 *
 * Returns: bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_data;
	ssize_t bytes;
	char buf[BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	file_data = open(filename, O_RDONLY);
	if (file_data == -1)
		return (0);

	bytes = read(file_data, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(file_data);

	return (bytes);
}
