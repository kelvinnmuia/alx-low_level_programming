#include <stdlib.h>
/**
 * free_dog - frees the dog struct
 * @d: pointer
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
