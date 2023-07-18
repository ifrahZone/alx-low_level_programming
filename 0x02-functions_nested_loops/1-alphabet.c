#include <stdio.h>

/**
 * print_alphabet - a program that prints the alphabet in lowercase.
 *
 * Return: 0 (success)
 **/

int print_alphabet (void)
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
