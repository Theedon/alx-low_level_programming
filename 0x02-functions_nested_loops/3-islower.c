#include "main.h"

/**
 *_islower - function to check if alphabet is lower case
 *@c: the character to be checked
 *
 *Return: return 0 or 1
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
