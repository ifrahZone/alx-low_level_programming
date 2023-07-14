#include <stdio.h>

/**
 * main - a program that prints lowercase alphabet in reverse
 *
 * Return: 0 (success)
 **/

int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
