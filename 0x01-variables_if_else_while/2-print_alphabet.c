#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase.
 *
 * Return: 0 (success)
 **/

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}

	putchar('\n');
	return (0);
}
