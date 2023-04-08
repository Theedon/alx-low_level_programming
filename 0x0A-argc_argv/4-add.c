#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *main - main function
 *@argc: number of arguments
 *@argv: array that stores arguments
 *Return: return 0 if addition worked and 1 if non integer is present
 */



int main(int argc, char *argv[])
{
	int i;
	int len1, int2;
	int len2;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		len1 = strlen(argv[i]);
		int2 = atoi(argv[i]);
		len2 = 0;
		while (int2 != 0)
		{
			int2 /= 10;
			len2++;
		}

		if (len1 != len2)
		{
			printf("Error\n");
			return (1);
		}
		else
			result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
