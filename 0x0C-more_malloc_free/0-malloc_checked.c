#include "main.h"

/**
 * *malloc_checked- a function that allocates memory using malloc
 *
 * return: a poijter to the allocated memory
 */

void *malloc_checked(unsigned int b)

{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)

		exit(98);

	return (ptr);
}



