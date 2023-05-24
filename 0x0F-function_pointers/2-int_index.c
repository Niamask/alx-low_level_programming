#include<stddef.h>
#include<stdlib.h>
/**
 * int_index - function that searches for an integer.
 * @array: integer array
 * @size: size of array
 * @cmp: pointer to function
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
