#include "main.h"


/**
 * swap_int - iswaps 2 integers
 * @a : int 1
 * @b : int 2
 * return : void
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
