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
int str;
char r;
int i = 0;

while (*s != '\0')
{
str++;
}
while (str - i > 0)
{
r = s[i];
s[i] = s[str - i];
s[str - i] = r;
i++;
str--;
}
}
