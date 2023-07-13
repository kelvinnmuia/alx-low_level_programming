#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function
 * @min: minimum array element
 * @max: maximum array element
 * Return: returns 1 or 0
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr = (int *)malloc((max - min) * sizeof(int));

	if (min > max)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < max - min; i++)
		ptr[i] = min + i;

	return (ptr);
}
