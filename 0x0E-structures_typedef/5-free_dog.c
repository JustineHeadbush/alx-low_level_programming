#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog -  frees dogs
 * @d: what will be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
		free(d->owner);
		free(d->name);
	}
}
