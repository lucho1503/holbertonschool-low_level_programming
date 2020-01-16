#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - search a value in a matrix of integers using algorithm
 * @array: array of integers
 * @size: number of elements in array
 * @value: value to search
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)(i), array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
