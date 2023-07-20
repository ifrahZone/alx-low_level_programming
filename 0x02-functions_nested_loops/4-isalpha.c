#include <stdlib.h>
#include "main.h"

/**
*_isalpha -  function that checks for alphabetic character.
*@c: character
*Return: 0 or 1
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
