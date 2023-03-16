#include <stdlib.h>
#include "main.h"

/**
 * 
 * malloc_checked - allocates memory uing malloc 
 * @b: no. of bytes to allocate
 * 
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
    void *y;

    y = malloc(b);

    if (y == NULL)
        exit(98);

    return (y);
}
