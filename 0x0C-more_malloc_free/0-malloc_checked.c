#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * Return: returns a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}