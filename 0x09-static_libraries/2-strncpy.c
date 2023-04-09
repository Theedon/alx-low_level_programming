#include "main.h"

/**
 *_strncpy - function
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *Return: stringx
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0;
	int i;

	while (src[srclen])
		srclen++;


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}



	return (dest);
}
