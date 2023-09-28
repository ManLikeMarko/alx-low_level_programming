#include "main.h"

/**
 * get_indianness - chks if mashin is a likle or bg endian
 *
 * Return: 0 for huge, 1 for litle
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return ( *c);
}
