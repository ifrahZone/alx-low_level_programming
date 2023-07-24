#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: *char
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = 0;

        while (*s != '\0')
        {
                len++;
                s++;
        }
        s--;
        while (*s < len)
        {
                _putchar(*s);
                s--;
        }
        printf("\n");
}
