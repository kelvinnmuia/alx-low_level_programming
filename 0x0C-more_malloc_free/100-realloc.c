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
	void *new_ptr = malloc(new_size);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_ptr != NULL)
	{
		size_t copy_size;

		if (old_size < new_size)
		{
			copy_size = old_size;
		}

		else
		{
			copy_size = new_size;
		}
		memcpy(new_ptr, ptr, copy_size);
		free(ptr);
	}

	return (new_ptr);

}
