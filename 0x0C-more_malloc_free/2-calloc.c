#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc
 * @nemb: number of elements
 * @size: size in bytes
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nemb, unsigned int size)
{
	char *m;
	unsigned int i= 0;

	if (nemb == 0 || size == 0)
		return (NULL);
	m = malloc(nemb * size);
	if (m == NULL)
		return (NULL);
	while (i < nemb * size)
	{
		*(m + i) = 0;
		i++;
	}
	return ((void *) m);
}
