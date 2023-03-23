#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - prints sum of all arguments
* @n: variale declaration
*Return : 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list valist;
unsigned int sum = 0, i;
if ( n == 0)
return 0;
va_start ( valist, n);
for (i = 0; i < n; i++)
sum += va_arg (valist, int);
va_end (valist);
return sum;
}
