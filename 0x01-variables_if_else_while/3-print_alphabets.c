#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase and uppercase.
 *
 * Return: 0 (success)
 **/

int main(void)
{
	char alph = 'a';
	char abet = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	while (abet <= 'Z')
	{
		putchar(abet);
		abet++;
	}

	putchat('\n');
	return (0);
}
