# include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Print a string
 * @s: stringg
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
