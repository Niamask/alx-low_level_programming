#include <ctype.h>
#include "main.h"
/**
 * _islower -  function that checks for lowercase character
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
