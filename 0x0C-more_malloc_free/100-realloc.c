#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_realloc - reallocates space in memory
 *@ptr: pointer to a space in memory
 *@old_size: size in byte
 *@new_size: size in byte
 *Return: pointer to a memory on success
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem;

	ptr = malloc(old_size);

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size > old_size)
		new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);
	strcpy(new_mem, ptr);
	free(ptr);
	return (new_mem);
}
