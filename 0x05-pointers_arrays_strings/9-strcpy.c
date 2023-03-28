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
	int len;
	int i;

	for (len = 0; src[len] != '\0'; len++)
	{
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
