#include <stdio.h>

/**
 * main - a program that prints all possible different two digits.
 *
 * Return: 0 (success)
 **/

int main(void)
{
	int n;
	int k;

	for (n = 0; n < 9; n++)
	{
		for (k = n + 1; k < 10; k++)
		{
			putchar('0' + n);
			putchar('0' + k);
			if (n != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
