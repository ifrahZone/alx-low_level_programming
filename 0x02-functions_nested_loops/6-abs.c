#include <stdlib.h>
#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @i: number
 * Return: 0
 *
*/
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}
