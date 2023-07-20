#include "main.h"

/**
 * print_times_table - prints the times table with parameter
 * @n: parameter
 * Return: returns
 */

void print_times_table(int n)
{
	int d;
	int m;
	int resultat;
	if (n <= 15 && n >= 0)
	{
		for (d = 0; d <= n; d++)
		{
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
				resultat = d * m;
				if (resultat <= 99)
					_putchar(' ');
				if (resultat <= 9)
					_putchar(' ');
				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
