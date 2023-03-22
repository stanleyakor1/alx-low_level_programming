#include "function_pointers.h"
/**
 *int_index - compare two numbers
 *@array : values to be compared
 *@size : array size
 *@cmp: compare functon
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
