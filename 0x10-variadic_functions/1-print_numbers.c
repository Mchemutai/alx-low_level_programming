#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
*print_numbers - function  to print numbers followed by new line
*
*@n:argument
*@separator: string to be printed between lines
*Return  numbers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i < (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
