#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;
	int len = 0;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;
	printf("%d\t%d\n", len, min);

	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		*(arr + i) = min;
		min++;
	}

	return (arr);
}
