#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 *
 * @str: input
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, n, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	n = (len / 2);

	if ((len % 2) == 1)
		n = ((len + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');
}
