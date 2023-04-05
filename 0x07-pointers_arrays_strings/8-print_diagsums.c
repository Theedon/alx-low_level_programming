#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - function
 *@a: input
 *@size: input
 *Return: return void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int lsum = 0;
	int rsum = 0;

	for (i = 0; i < size; i++)
	{
		lsum += a[(size * i) + i];
		rsum += a[(size * (i + 1)) - (i  + 1)];
		j--;
	}

	printf("%d, %d\n", lsum, rsum);
}
