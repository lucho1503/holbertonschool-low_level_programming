#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searchs a value in a sorted array
 * @array: array of a integers
 * @size: size of array
 * @value: value to search
 * Return: -1 if falis if not return the position of value
 */

int jump_search(int *array, size_t size, int value)
{
	int jump_step;
	int prev;
	int k = 0;
	int index = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	jump_step = (int)sqrt((double)size);
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * jump_step;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
