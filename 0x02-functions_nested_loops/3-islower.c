#include <stdio.h>
#include "main.h"

/**
 * _islower - a program that checks for lowercase character.
 *@c: character
 * Return: 1 (lowercase)
 **/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);

}
