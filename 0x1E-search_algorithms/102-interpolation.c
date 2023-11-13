#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using an interpolation search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t high = size - 1;
	size_t pos;

	if (!array)
		return (-1);

	while ((array[high] != array[l]) &&
	       (value >= array[l]) && (value <= array[high]))
	{
		pos = l + (((double)(high - l) / (array[high] - array[l]))
			    * (value - array[l]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			l = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}
	if (value == array[l])
	{
		printf("Value checked array[%lu] = [%d]\n", l, array[l]);
		return (l);
	}
	pos = l + (((double)(high - l) / (array[high] - array[l]))
		     * (value - array[l]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
