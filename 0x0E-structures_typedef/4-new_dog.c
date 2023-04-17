#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * stringCopy - Copies a string
 * @dest: stores the string copy.
 * @src: the string.
 * Return: pointer to dest.
 */
char *stringCopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
/**
 * stringLength - length of string.
 * @str: The string
 * Return: The length of string.
 */
int stringLength(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}
/**
 * new_dog - Creates a new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dawg;

	dawg = malloc(sizeof(dog_t));
	if (dawg == NULL)
		return (NULL);

	dawg->owner = malloc(sizeof(char) * (stringLength(owner) + 1));
	if (dawg->owner == NULL)
	{
		free(dawg);
		return (NULL);
	}

	dawg->name = malloc(sizeof(char) * (stringLength(name) + 1));
	if (dawg->name == NULL)
	{
		free(dawg->owner);
		free(dawg);
		return (NULL);
	}

	dawg->owner = stringCopy(dawg->owner, owner);
	dawg->age = age;
	dawg->name = stringCopy(dawg->name, name);

	return (dawg);
}
