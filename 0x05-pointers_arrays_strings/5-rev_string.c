#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 *
 * @s: string
 *
 * Return: noyhing
 */

void rev_string(char *s)
{
char *str;

while (*s != '\0')
{
str = str + s;
s++;
}
s--;
while (*s > 0)
{
s = str;
s--;
str++;
}
}


