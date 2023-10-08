#include <stdlib.h>
#include "main.h"

/*
 * malloc_checked(unsigned int b) allocates memory
 * Return ptr: Returns a pointer to the allocated memory
 * exit(98): terminate the function with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
