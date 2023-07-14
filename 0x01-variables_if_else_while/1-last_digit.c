#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that print The last digit.
 *
 * Return: 0 (success)
 **/
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, d);
	} else
	{
		if(d > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, d);
		} else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
		}
	}
	return (0);
}
