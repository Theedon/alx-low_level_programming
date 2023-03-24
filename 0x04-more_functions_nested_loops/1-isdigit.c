#include "main.h"

/**
 *_isdigit - function to calculate if input is a digit
 *@c: input integer parameter
 *
 *Return: return 1 if digit and 0 otherwise
 */

int _isdigit(int  c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
