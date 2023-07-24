#include "main.h"
#include <stdio.h>
/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str: char
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%s", str);
		str++;
	}
	printf("\n");
}
