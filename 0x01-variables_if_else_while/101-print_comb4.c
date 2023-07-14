#include <stdio.h>

/**
 * main - a program that prints
 *
 * Return: 0 (success)
 **/

int main(void)
{
	int n;
	int k;
	int i;

	for (n = 0; n < 8; n++)
	{
		for (k = n + 1; k < 9; k++)
		{
			for (i = k + 1; i < 10; i++)
			{
				putchar('0' + n);
				putchar('0' + k);
				putchar('0' + i);
				if (n != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
