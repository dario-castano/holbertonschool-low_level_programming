#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - swap the values of two integers
 * @s: pointer to a char
 * Return: number of chars
 */
int _strlen(char *s)
{
	int acc = 0;

	while (s[acc] != '\0')
	{
		acc++;
	}
	return (acc);
}

/**
 * _strcpy - like string copy but homemade
 * @dest: pointer to a char (destination)
 * @src: pointer to a char (source)
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int srclen = _strlen(src);

	for (i = 0; i <= srclen; i++)
	{
		if (i == srclen)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}

	return (dest);
}

/**
 * new_dog - function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner
 * Return: pointer to a dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy_dog;
	int name_len = _strlen(name);
	int owner_len = _strlen(owner);

	if (name == NULL || owner == NULL)
		return (NULL);

	copy_dog = malloc(sizeof(dog_t));

	if (copy_dog == NULL)
		return (NULL);

	copy_dog->name = malloc(name_len + 1);

	if (copy_dog->name == NULL)
	{
		free(copy_dog);
		return (NULL);
	}

	copy_dog->owner = malloc(owner_len + 1);

	if (copy_dog->owner == NULL)
	{
		free(copy_dog->name);
		free(copy_dog);
		return (NULL);
	}

	_strcpy(copy_dog->name, name);
	copy_dog->age = age;
	_strcpy(copy_dog->owner, owner);

	return (copy_dog);
}
