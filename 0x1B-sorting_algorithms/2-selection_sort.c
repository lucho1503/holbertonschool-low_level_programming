#include "sort.h"

/**
 * selection_sort - sort the array for selection.
 * @array: array of size size
 * @size: size of array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t min, i, j, temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		print_array(array, size);
		}
	}
}
