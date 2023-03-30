#include "main.h"

/**
 *reverse_array - function
 *@a: parameter
 *@n: parameter
 */

void reverse_array(int *a, int n)
{
	int i;
	int half;

	if (n % 2 == 0)
		half = n / 2;
	else
		half = (n / 2);

	for (i = 0; i <= half; i++)
	{
		int temp = a[i];

		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
