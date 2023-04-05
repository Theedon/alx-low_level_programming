#include "main.h"

int find_sqrt(int, int);
/**
 *_sqrt_recursion - function
 *@n: input
 *Return: return square root
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (find_sqrt(n, n - 1));
}

/**
 *find_sqrt - function
 *@c: input
 *@d: input
 *Return: return int
 */
int find_sqrt(int c, int d)
{
	if (d == 0)
		return (-1);
	else if (d * d == c)
	{
		return (d);
	}
	else
		return (find_sqrt(c, d - 1));
}
