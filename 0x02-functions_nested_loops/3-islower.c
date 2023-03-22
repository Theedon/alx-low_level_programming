#include "main.h"

/**
 *main - entry point
 *
 *Return: returns void
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
