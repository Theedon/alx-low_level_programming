#include <stdio.h>
#include "main.h"

/**
 *main - main function
 *@argc: number of arguments
 *@argv: array that stores arguments
 *Return: return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
