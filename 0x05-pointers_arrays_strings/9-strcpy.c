#include "main.h"

/**
 *_strcpy - function that copies a string from one location to another
 *@dest: destination pointer
 *@src: source pointer
 *Return: return a pointer to the address of the beginning of the contiguous
 *location
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++
	}

	return (dest);
}
