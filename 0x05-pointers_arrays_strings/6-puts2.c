#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *
 * @str: input
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int len = 0;
	int n = 0;
	char *s = str;
	int i;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	n = len - 1;
	for (i = 0 ; i <= n ; i++)
	{
		if (i % 2 == 0)
	{
		putchar(str[i]);
	}
	}
	putchar('\n');
}

