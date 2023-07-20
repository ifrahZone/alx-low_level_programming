#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - function that print last digit of a number
 * @n: number
 * Return: 0
*/

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = (-1) * last;
	_putchar ('0' + last);
	return (last);
}
