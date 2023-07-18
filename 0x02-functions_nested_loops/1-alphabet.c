#include <stdio.h>


/**
 * print_alphabet - a program that prints the alphabet in lowercase.
 *
 * Return: 0 (success)
 **/

void print_alphabet (void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}

	_putchar('\n');
}
