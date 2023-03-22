#include <stdio.h>
#include "function_pointers.h"
#include <string.h>

/**
 * main - entry point
 *
 * Return : 0
 *
 */
                                           
void print_name(char *name, void (*f)(char *)) 
{
	if (name && f)
		f(name);
}
