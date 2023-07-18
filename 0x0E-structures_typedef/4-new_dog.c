#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copies the string
 * @s: string
 * Return: pointer to the string
 */
char *_strcpy(char *s)
{
	int i;
	char *ptr;

	for (i = 0; s[i]; i++)
		;

	ptr = malloc(i + 1);

	if (ptr)
	{
		for (; i >= 0; i--)
		{
			ptr[i] = s[i];
		}
	}

	return (ptr);


}
/**
 * new_dog - create new dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: returns null
 */
dog_t *new_dog(char *name, float age, char owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	ptr->name = _strcpy(name);

	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->age = age;

	ptr->owner = _strcpy(owner);

	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
