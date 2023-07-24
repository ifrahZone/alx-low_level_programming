#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: parametre
 * @b: parametre
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
