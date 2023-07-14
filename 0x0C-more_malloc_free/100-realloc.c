#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - function
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: returns 1 or 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
		return ((void *)malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ptr = malloc(new_size);

	if (ptr == NULL)
		return (NULL);

	if (old_size > new_size)
		old_size = new_size;
	while (old_size--)
		ptr[old_size] = ((char *)ptr)[old_size];

	free(ptr);

	return ((void *)ptr);
