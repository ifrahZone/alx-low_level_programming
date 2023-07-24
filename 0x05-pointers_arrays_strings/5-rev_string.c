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
char r = s[0];
int i = 0;

while (s[str] != '\0')
str++;
for (i = 0; i < str; i++)
{
str--;
r = s[i];
s[i] = s[str];
s[str] = r;
}
}
