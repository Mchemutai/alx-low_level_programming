#include "main.h"
#include <stdio.h>

/**
 * more_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

int main (void)
{
int number, tens, units, row;
for (row = 1; row <= 10; row++)
{
for (number = 0; number <= 14; number++)
{
tens = number / 10;
units = number % 10;
if (number > 9)
putchar(tens + '0');
putchar(units + '0');
}
putchar('\n');
}
return (0);
}
