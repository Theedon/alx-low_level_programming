#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	int i;
	int len_str = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);

	while (*(str + len_str))
		len_str++;

	new_str = (char *) malloc(sizeof(char) * len_str);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len_str; i++)
	{
		*(new_str + i) = *(str + i);
	}

	return (new_str);
}
