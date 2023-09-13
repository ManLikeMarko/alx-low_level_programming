#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - entryb point
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 1 on success 0 failure
 */

int main(int ac, char **av)
{
	int from_file_data = 0, to_file_data = 0;
	ssize_t b;
	char buf[BUFSIZ];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_file_data = open(av[1], O_RDONLY);
	if (from_file_data == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_file_data = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_file_data == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((b = read(from_file_data, buf, BUFSIZ)) > 0)
		if (write(to_file_data, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	from_file_data = close(from_file_data);
	to_file_data = close(to_file_data);

	if (from_file_data)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_file_data), exit(100);
	if (to_file_data)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_file_data), exit(100);

	return (EXIT_SUCCESS);
}
