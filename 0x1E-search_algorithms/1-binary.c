#include "search_algos.h"

/**
  * binary_search - Searches 4 val mu sorted array
  * @array: Poynda ku element yeku tanga ye array to search.
  * @size: Num of elements mu array.
  * @value: Val to search 4.
  *
  * Return: Kana val isiri  present or the array is ZERO/NULL, PRIT -1.
  *
  * Description: Must print a sub Array for it to work.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
