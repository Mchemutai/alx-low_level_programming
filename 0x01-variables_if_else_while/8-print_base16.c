#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int a;
char Lowerc;
for (a = 0; a < 10; a++)
putchar((a % 10) + '0');
for (Lowerc = 'a'; Lowerc <= 'f'; Lowerc++)
putchar(Lowerc);
putchar('\n');
return (0);
}
