#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of char.
 * @size : unsigned integer
 * @c : character
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc((sizeof(char)) * size);

	if (size == 0)
		return (NULL);

	if (p != NULL)

	{
		for (i = 0; i < size; i++)
			p[i] = c;
	}
	return (p);
}
