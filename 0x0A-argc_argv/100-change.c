#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 *main - main function
 *@argc: number of arguments
 *@argv: array that stores arguments
 *Return: return 0 if runs correctly and return 1 if error encounteredx
 */



int main(int argc, char *argv[])
{
	int cent;
	int coins[] = {25, 15, 10, 5, 2, 1};
	int i;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	cent = atoi(argv[1]);
	for (i = 0; i < 6; i++)
	{
		if (cent == 0)
			break;


		if (cent / coins[i] > 0)
		{
			count += (cent / coins[i]);
			cent -= (coins[i] * (cent / coins[i]));
		}
	}
	printf("%d\n", count);
	return (0);
}
