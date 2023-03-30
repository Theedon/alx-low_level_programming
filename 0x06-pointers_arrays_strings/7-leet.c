#include "main.h"

/**
 *leet - function
 *@str: parameter
 *Return: string
 */

char *leet(char *str)
{
	char chars[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	const int SIZE = 10;
	char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i;
	int j;


	for (i = 0; str[i] != '\0'; i++)
	{
		for (j  = 0; j < SIZE; j++)
		{
			if (str[i] == chars[j])
				str[i] = numbers[j];
		}
	}
	return (str);
}
