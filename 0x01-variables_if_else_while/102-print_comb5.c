#include <stdio.h>

/**
 * main - a program that prints two two-digit numbers.
 *
 * Return: 0 (success)
 **/

int main(void)
{
	int n;
	int k;
	int i;
	int j;
	int x;
	int y;

	for (n = 0; n < 99; n++)
	{
		for (k = n +1; k < 100; k++)
		{
			i = n % 10;
			j = (n - i) / 10;
			x = k % 10;
			y = (k - x) / 10;
			putchar('0' + j);
			putchar('0' + i);
			putchar(' ');
			putchar('0' + y);
			putchar('0' + x);
			if ( n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
