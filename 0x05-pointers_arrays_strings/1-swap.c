#include "main.h"

/**
 *swap_int - swap input
 *@a: input 1
 *@b: input 2
 *
 *Return: return void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
