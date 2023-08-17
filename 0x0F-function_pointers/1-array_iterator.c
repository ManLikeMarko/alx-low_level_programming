#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: input array
 * @size: size of array
 * @action: function call
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *length = array + size - 1;

	if (array && size && action)
	{
		while (array <= length)
			action(*array++);
	}
}