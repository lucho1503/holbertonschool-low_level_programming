#include "search_algos.h"

/**
 * interpolation_search - search a value in a sorted array
 * @array: array of a integers
 * @size: size of array
 * @value: value to search
 * Return: value if not -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high, pos, mid = -1, index = -1;

	if (array == NULL)
		return (-1);
	high = (int)size - 1;
	while (low <= high)
	{
		mid = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		pos = low + mid;
		printf("Value checked array[%d]", mid);
		if (pos >= (int)size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[mid]);
		if (array[mid] == value)
		{
			index = mid;
			break;
		}
		else
		{
			if (array[mid] < value)
				low = mid + 1;
			else
				high = mid - 1;
		}
	}
	return (index);
}
