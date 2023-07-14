#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
 **/

int main(void)
{
	char alph = 'a';
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	while (alph < 'g')
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
