#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural from n to 98
 * @n: number to start by
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
}
