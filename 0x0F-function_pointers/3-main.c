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
	int num1;
	int num2;
	int result;
	char symbol;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	p = get_op_func(argv[2]);
	if(p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	symbol = *argv[2];

	if((symbol == '/' || symbol == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = p(num1, num2);
	printf("%d\n", result);
	return (0);
}
