#include "shell.h"

/**
 * bfree - To free a pointer and to NULL the address
 * @ptr: The address of the pointer to be free
 *
 * Return: 1 if it is freed, 0 if it is not freed
 */
int bfree(void ptr)
{
	if (ptr && ptr)
	{
		free(ptr);
		ptr = NULL;
		return (1);
	}
	return (0);
}
