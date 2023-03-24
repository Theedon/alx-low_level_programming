#include "main.h"

/**
 *_isupper - check if character is capital letter
 *@c: input parameter
 *
 *Return: return int
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
