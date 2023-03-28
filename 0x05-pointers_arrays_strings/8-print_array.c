#include "main.h"
#include <stdio.h>

/**
 *print_array - function to print array
 *@a: parameter 1
 *@n: parameter 2
 *Return: void
 */

void print_array(int *a, int n)
{
	int i;

	if (n  > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
				printf("%d, ", *(a + i));
			else
				printf("%d\n", *(a + i));
		}
	}
	else
	{
		printf("\n");
	}
}
