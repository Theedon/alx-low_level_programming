#incliude "main.h"

/**
 *_strchr - function
 *@s: input
 *@c: input
 *Return: return char
 */

char _strchr(char *s, char c)
{
	int i;
	int present = 0;
	int position = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			present += 1;
			break;
		}

	}

	if (present == 0)
		return (NULL);
	else
		return (s + i);
}
