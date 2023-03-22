#include "function_pointers.h"
/**
 *int_index - compare two numbers
 *@array : values to be compared
 *@size : array size
 *@cmp: compare functon
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		do {
			if (cmp(array[i]))
				return (i);
			i++;
		} while (i < size);
	}
	return (-1);
}
