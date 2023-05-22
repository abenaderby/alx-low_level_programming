#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int length99;

	length99 = 0;

	while (s[length99] != '\0')
	{
		length99++;
	}

	return (length99);
}

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer to the buffer
 * @src: string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, t;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (t = 0; t < l; t++)
	{
		dest[t] = src[t];
	}
	dest[t] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: (0) Always
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int n, w;

	n = _strlen(name);
	w = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (n + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (w + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
