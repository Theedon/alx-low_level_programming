#include "3-calc.h"
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int result;
	int i;
	int present = 0;
	int validOperators[5] = {'+', '-', '*', '/', '%'};
	int (*p)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}

	if (num2 == 0 && (strcmp(argv[2], "/") == 0
			  || strcmp(argv[2], "%") == 0))
	{
		printf("Error");
		exit(100);
	}
	for (i = 0; i < 5; i++)
	{
		if (argv[2][0] == validOperators[i])
		{
			present++;
			break;
		}
	}
	if (present == 0)
	{
		printf("Error");
		exit(99);
	}
	p = get_op_func(argv[2]);
	result = p(num1, num2);

	printf("%d\n", result);
	return (0);
}
