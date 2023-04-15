#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *ptr2;
	unsigned int min_size = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (ptr);
	}

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);

	if (new_size < old_size)
		min_size = new_size;
	for (i = 0; i < min_size; i++)
	{
		*((char *) (ptr2) + i) = *((char *) (ptr) + i);
	}
	free(ptr);

	return (ptr2);
}
