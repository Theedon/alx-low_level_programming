#include "main.h"
#include <stdlib.h>

/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */

char *argstostr(int ac, char **av)
{
	int i, j;
	char *s;
	int len_sum = ac;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			len_sum += 1;
		}

	}
	s = (char *) malloc(sizeof(char) * (len_sum + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*(s + k) = av[i][j];
			k++;
		}

		if (i < ac - 1 || av[i][j] != '\n')
		{
			*(s + k) = '\n';
			k++;
		}
	}
	return (s);
}
