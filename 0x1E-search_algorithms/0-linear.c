#include "search_algos.h"

/**
 * linear_search - searchz 4 a val in an array for linear search
 * @array: array ye int
 * @size: size ye array
 * @value: val tt should shown
 *
 * Return: indx va searched or -1 if none
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
