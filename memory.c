#include "shell.h"

/**
 * bfree - Frees a pointer and NULL the address
 * @ptr: Address of pointer to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
