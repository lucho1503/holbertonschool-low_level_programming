#include "search_algos.h"


/**
 * print_array - print all array
 * @array: array of integers.
 * @first: first element in array.
 * @last: last element in array.
 * Return: notihng
 */


void print_array(int *array, size_t first, size_t last)
{
	printf("Searching in array: ");
	for (; first < last; first++)
		printf("%d, ", array[first]);
	printf("%d\n", array[first]);
}


/**
 * binary_search - searchs value in a sorted array using binary search alg
 * @array: array of integers.
 * @size: size of array.
 * @value: value to searching.
 * Return: the index where value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t first = 0;
	size_t last = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);
	while (first < size)
	{
		print_array(array, first, last);
		mid = (first + last) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			first = mid + 1;
		else
			last = mid - 1;
	}
	return (-1);
}
