#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i;
	int len_name = 0;
	int len_owner = 0;

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	(*dog).name = malloc(sizeof(char) * len_name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * len_owner);
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
	{
		dog->name[i] = name[i];
	}

	for (i = 0;  owner[i]; i++)
	{
		dog->owner[i] = owner[i];
	}
	dog->age = age;
	return (dog);
}
