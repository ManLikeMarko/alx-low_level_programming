#include "main.h"
/**
 * get_endianness - hecks the endiannes
 *
 * Return: 0 if big endian 1 if small
 */
int get_endianness(void)
{
	unsigned int n = 1;

	return (*(char *)&n);
}
