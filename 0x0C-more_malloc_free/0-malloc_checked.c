#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
/**
 * malloc_checked-> checking malloc
 * @a: param a
 */
void *malloc_checked(unsigned int a)
{
void *p;
p = malloc(a);
if (p == NULL)
{
exit(98);
}
return (p);
}
