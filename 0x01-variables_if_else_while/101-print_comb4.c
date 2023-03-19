#include <stdio.h>

/**
 *main- entry point
 *
 *Return: exit point
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i == j || i == k || j == k || i > j || j > k)
				{
				}

				else
				{
					putchar(i % 10 + '0');
					putchar(j % 10 + '0');
					putchar(k % 10 + '0');
					if (i == 7 && j == 8 && k == 9)
					{
						putchar(' ');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
