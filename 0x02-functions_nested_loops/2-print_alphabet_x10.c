#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - a program that prints the alphabet in lowercase.
 *
 * Return: 0 (success)
 **/

void print_alphabet_x10(void)
{
	char alph;
	int i;

	for(i = 0; i < 10; i++)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
	}
}
