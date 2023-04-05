#include "main.h"

int check_prime(int, int);

/**
 *is_prime_number - function
 *@n: input
 *Return: return int prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 *check_prime - function
 *@c: input
 *@d: input
 *Return: return int
 */

int check_prime(int c, int d)
{
	if (d == 1)
	{
		return (d);
	}
	else if (c % d == 0 && d > 0)
		return (0);
	return (check_prime(c, d - 1));
}
