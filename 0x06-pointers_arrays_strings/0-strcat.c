#include "main.h"

/**
 *_strcat - function
 *@dest: parameter
 *@src: parameter
 *Return: return string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;

	while (dest[i])
		i++;
	while (src[j])
		j++;

	for (k = 0; k < j; k++)
	{
		dest[i] = src[k];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
