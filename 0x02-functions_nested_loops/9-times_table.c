#include <stdlib.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: nothing
 */

void times_table(void)
{
	int d;
	int k;
	int resultat;

	for (d = 0; d <= 9; d++)
	{
		_putchar('0');
		for (k = 1; k <= 9; k++)
		{
			_putchar(',');
			_putchar(' ');
			resultat = d * k;
			if (resultat <= 9)
				_putchar(' ');
			else
				_putchar((resultat / 10) + '0');
			_putchar((resultat % 10) + '0');
		}
		_putchar('\n');
	}
}
