#include <stdio.h>
#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination
 * @src: source
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{       
        int i;
        int j;

	while(dest[i] != '\0')
                i++;
        while(src[j] != '\0')
        {
                dest[i] = src[j];
                i++;
                j++;
        }
        dest[i] = '\0';
	return(dest);
}